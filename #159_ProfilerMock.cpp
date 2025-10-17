// Ejercicio 159 - Mock de profiler: medir tiempos de secciones
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main(){
    auto t0 = high_resolution_clock::now();
    // sección A
    this_thread::sleep_for(chrono::milliseconds(100));
    auto t1 = high_resolution_clock::now();
    // sección B
    this_thread::sleep_for(chrono::milliseconds(50));
    auto t2 = high_resolution_clock::now();
    cout<<"Sección A: "<<duration_cast<milliseconds>(t1-t0).count()<<" ms\n";
    cout<<"Sección B: "<<duration_cast<milliseconds>(t2-t1).count()<<" ms\n";
    return 0;
}
