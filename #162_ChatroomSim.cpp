// Ejercicio 162 - Simulación simple de chatroom (local): usuarios y mensajes
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> users; vector<string> msgs;
    cout<<"Agregar usuarios (enter blank para terminar):\n"; string u;
    while(true){ getline(cin,u); if(u.empty()) break; users.push_back(u); }
    cout<<"Enviar mensajes: escribe 'user:message' o 'exit'\n";
    string line;
    while(true){ getline(cin,line); if(line=="exit") break; cout<<"Mensaje recibido: "<<line<<"\n"; msgs.push_back(line); }
    cout<<"Historial:\n"; for(auto &m: msgs) cout<<m<<"\n";
    return 0;
}
