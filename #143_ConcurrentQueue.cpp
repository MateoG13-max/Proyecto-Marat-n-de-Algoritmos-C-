// Ejercicio 143 - Cola concurrente simple (push/pop thread-safe)
#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <thread>
using namespace std;

template<typename T>
class ThreadSafeQueue {
    queue<T> q; mutex m; condition_variable cv;
public:
    void push(T v){ { lock_guard<mutex> lk(m); q.push(v); } cv.notify_one(); }
    T pop(){ unique_lock<mutex> lk(m); cv.wait(lk, [&]{return !q.empty();}); T v=q.front(); q.pop(); return v; }
    bool empty(){ lock_guard<mutex> lk(m); return q.empty(); }
};

int main(){
    ThreadSafeQueue<int> q;
    thread producer([&]{ for(int i=1;i<=5;i++){ q.push(i); cout<<"Pushed "<<i<<"\n"; } });
    thread consumer([&]{ for(int i=1;i<=5;i++){ int v=q.pop(); cout<<"Popped "<<v<<"\n"; } });
    producer.join(); consumer.join();
    return 0;
}
