// Ejercicio 142 - Contador protegido por mutex incrementado por hilos
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;

int main(){
    int counter=0;
    mutex m;
    auto inc = [&](int times){ for(int i=0;i<times;i++){ lock_guard<mutex> lk(m); counter++; } };
    vector<thread> th;
    for(int i=0;i<5;i++) th.emplace_back(inc,1000);
    for(auto &t: th) t.join();
    cout<<"Counter final: "<<counter<<"\n";
    return 0;
}
