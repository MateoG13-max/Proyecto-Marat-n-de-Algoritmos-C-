#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Adivina {
    int secreto;
public:
    Adivina(int nivel){
        srand((unsigned)time(nullptr));
        if(nivel==1) secreto = rand()%50 +1;
        else if(nivel==2) secreto = rand()%100 +1;
        else secreto = rand()%500 +1;
    }
    void jugar(){
        int intento, cont=0;
        cout<<"Adivina el número (intentos ilimitados)\\n";
        do{
            cin>>intento; cont++;
            if(intento < secreto) cout<<"Más alto\\n";
            else if(intento > secreto) cout<<"Más bajo\\n";
            else cout<<"¡Acertaste en "<<cont<<" intentos!\\n";
        } while(intento != secreto);
    }
};

int main(){
    int nivel; cout<<"Elige nivel 1(fácil)/2(medio)/3(difícil): "; cin>>nivel;
    Adivina game(nivel); game.jugar();
    return 0;
}