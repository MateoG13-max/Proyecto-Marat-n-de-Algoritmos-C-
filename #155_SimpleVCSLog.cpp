// Ejercicio 155 - Mini sistema de commits guardando mensajes con timestamp (persistente)
#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    string msg; cout<<"Mensaje de commit: "; cin.ignore(); getline(cin,msg);
    auto now = chrono::system_clock::to_time_t(chrono::system_clock::now());
    ofstream out("commits.log", ios::app);
    out<<ctime(&now)<<": "<<msg<<"\n";
    out.close();
    cout<<"Commit guardado en commits.log\n";
    return 0;
}
