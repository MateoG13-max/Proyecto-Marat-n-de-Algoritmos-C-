#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Cronometro {
    time_point<steady_clock> start_time;
    bool running = false;
public:
    void iniciar(){ start_time = steady_clock::now(); running=true; cout<<"Cronómetro iniciado\\n"; }
    void detener(){
        if(!running){ cout<<"No está corriendo\\n"; return; }
        auto end = steady_clock::now();
        auto ms = duration_cast<milliseconds>(end - start_time).count();
        cout<<"Tiempo transcurrido: "<<ms<<" ms\\n";
        running=false;
    }
};

int main(){
    Cronometro c;
    char op;
    cout<<"Presiona 's' para iniciar, 'e' para detener: ";
    while(cin>>op){
        if(op=='s') c.iniciar();
        else if(op=='e'){ c.detener(); break; }
    }
    return 0;
}