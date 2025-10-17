// Ejercicio 144 - Temporizador asíncrono que ejecuta tarea después de un delay (std::async)
#include <iostream>
#include <future>
#include <chrono>
using namespace std;

int main(){
    cout<<"Programará tarea en 2 segundos y seguirá.\n";
    auto fut = async(launch::async, [](){
        this_thread::sleep_for(chrono::seconds(2));
        cout<<"Tarea asíncrona completada\n";
    });
    cout<<"Haciendo otras cosas mientras...\n";
    fut.wait();
    return 0;
}
