#include <iostream>
#include <vector>
using namespace std;

class Ship {
public:
    int size;
    vector<bool> hits;
    Ship(int s): size(s), hits(s,false) {}
    bool isSunk(){ for(bool h: hits) if(!h) return false; return true; }
    void hit(int pos){ if(pos>=0 && pos<size) hits[pos]=true; }
};

int main(){
    Ship player(3), enemy(3);
    cout<<"¡Batalla simplificada! Da posiciones 0..2 para impactar al enemigo.\\n";
    int turn=0;
    while(!player.isSunk() && !enemy.isSunk()){
        if(turn==0){ int p; cout<<"Tu ataque pos: "; cin>>p; enemy.hit(p); cout<<(enemy.isSunk()?"Hundido enemigo!\\n":"Tocado/no hundido\\n"); }
        else { int p = rand()%3; cout<<"Enemigo ataca pos "<<p<<"\\n"; player.hit(p); cout<<(player.isSunk()?"Has sido hundido!\\n":"Sigues vivo\\n"); }
        turn = 1 - turn;
    }
    return 0;
}