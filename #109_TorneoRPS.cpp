#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Estrategia {
public:
    virtual ~Estrategia() {}
    virtual int elegir() = 0; // 0 rock,1 paper,2 scissors
};

class Aleatoria : public Estrategia {
public:
    Aleatoria(){ srand((unsigned)time(nullptr)); }
    int elegir() override { return rand()%3; }
};

class SiemprePiedra : public Estrategia { public: int elegir() override { return 0; } };

int main(){
    Estrategia* a = new Aleatoria();
    Estrategia* b = new SiemprePiedra();
    int rondas=5, scoreA=0, scoreB=0;
    for(int i=0;i<rondas;i++){
        int A = a->elegir(), B = b->elegir();
        if(A==B) cout<<"Empate\\n";
        else if((A==0 && B==2)||(A==1 && B==0)||(A==2 && B==1)){ scoreA++; cout<<"A gana ronda\\n"; }
        else { scoreB++; cout<<"B gana ronda\\n"; }
    }
    cout<<"Marcador A-B: "<<scoreA<<" - "<<scoreB<<"\\n";
    delete a; delete b;
    return 0;
}