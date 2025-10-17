// Ejercicio 163 - Motor por turnos: registro de jugadores y acciones simples
#include <iostream>
#include <vector>
using namespace std;

struct Player{ string name; int hp; };
int main(){
    int n; cout<<"Número de jugadores: "; cin>>n;
    vector<Player> ps(n);
    for(int i=0;i<n;i++){ cin>>ps[i].name; ps[i].hp=100; }
    int turn=0;
    while(true){
        cout<<"Turno de "<<ps[turn].name<<", acción (attack/pass/quit): "; string act; cin>>act;
        if(act=="attack"){ int target; cin>>target; ps[target].hp -= 10; cout<<ps[target].name<<" recibe 10 dmg\n"; }
        else if(act=="pass") cout<<"Pasa\n";
        else if(act=="quit") break;
        turn = (turn+1)%n;
        for(auto &p: ps) cout<<p.name<<": "<<p.hp<<"hp  ";
        cout<<"\n";
    }
    return 0;
}
