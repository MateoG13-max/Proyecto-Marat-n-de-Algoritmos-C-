// Ejercicio 154 - Sencillo planificador cron-like (parsing básico de "every N seconds" para demo)
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main(){
    int interval; cout<<"Ejecutar tarea cada N segundos (N): "; cin>>interval;
    cout<<"Presiona Ctrl+C para detener (demo por 3 ejecuciones)\n";
    for(int i=0;i<3;i++){
        cout<<"Ejecutando tarea "<<i+1<<"\n";
        this_thread::sleep_for(chrono::seconds(interval));
    }
    cout<<"Demo terminada\n";
    return 0;
}
