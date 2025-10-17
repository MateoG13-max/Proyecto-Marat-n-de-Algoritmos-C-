// Ejercicio 164 - Guardar/Cargar estado de juego (serialización simple)
#include <iostream>
#include <fstream>
using namespace std;
struct State{ int level; int hp; };
int main(){
    State s{1,100};
    cout<<"Set level and hp: "; cin>>s.level>>s.hp;
    ofstream out("savegame.bin", ios::binary);
    out.write((char*)&s, sizeof(s)); out.close(); cout<<"Guardado\n";
    State load; ifstream in("savegame.bin", ios::binary); in.read((char*)&load, sizeof(load)); cout<<"Cargado level="<<load.level<<" hp="<<load.hp<<"\n";
    return 0;
}
