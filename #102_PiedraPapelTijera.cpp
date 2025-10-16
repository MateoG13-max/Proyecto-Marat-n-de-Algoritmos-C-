#include <iostream>
using namespace std;

class RPSGame {
public:
    static int toMove(const string& s) {
        if(s=="piedra") return 0; if(s=="papel") return 1; if(s=="tijera") return 2;
        return -1;
    }
    static int judge(int a,int b){ 
        if(a==b) return 0;
        if((a==0 && b==2)||(a==1 && b==0)||(a==2 && b==1)) return 1;
        return 2;
    }
};

int main(){
    int n; cout<<"Mejor de cuántas rondas (impar): "; cin>>n;
    string aMove, bMove;
    int scoreA=0, scoreB=0;
    while(scoreA <= n/2 && scoreB <= n/2){
        cout<<"Jugador A (piedra/papel/tijera): "; cin>>aMove;
        cout<<"Jugador B (piedra/papel/tijera): "; cin>>bMove;
        int a = RPSGame::toMove(aMove), b = RPSGame::toMove(bMove);
        if(a==-1 || b==-1){ cout<<"Movimiento inválido\\n"; continue; }
        int res = RPSGame::judge(a,b);
        if(res==1) { cout<<"A gana la ronda\\n"; scoreA++; }
        else if(res==2) { cout<<"B gana la ronda\\n"; scoreB++; }
        else cout<<"Empate\\n";
        cout<<"Marcador "<<scoreA<<" - "<<scoreB<<"\\n";
    }
    cout<<"\\nGanador final: "<<(scoreA>scoreB?"Jugador A":"Jugador B")<<"\\n";
    return 0;
}