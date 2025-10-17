// Ejercicio 141 - Pool de trabajadores simple usando std::thread (ejecución limitada)
#include <iostream>
#include <thread>
#include <vector>
#include <queue>
#include <mutex>
#include <condition_variable>
using namespace std;

int main(){
    queue<int> tasks;
    mutex m; condition_variable cv; bool done=false;
    // llenar tareas
    for(int i=1;i<=10;i++) tasks.push(i);

    auto worker = [&](int id){
        while(true){
            int task=0;
            { unique_lock<mutex> lk(m);
                if(tasks.empty()) break;
                task = tasks.front(); tasks.pop();
            }
            cout<<"Worker "<<id<<" procesando "<<task<<"\n";
            this_thread::sleep_for(chrono::milliseconds(100));
        }
    };

    int nworkers=3;
    vector<thread> threads;
    for(int i=0;i<nworkers;i++) threads.emplace_back(worker,i);
    for(auto &t: threads) t.join();
    cout<<"Todas las tareas procesadas\n";
    return 0;
}
