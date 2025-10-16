#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){
    auto start = steady_clock::now();
    int score=0;
    string ans;
    cout<<"Tienes 10 segundos para responder 2 preguntas.\\n";
    cout<<"1) 2+2? "; cin>>ans; if(ans=="4") score++;
    auto now = steady_clock::now();
    if(duration_cast<seconds>(now-start).count() > 10){ cout<<"Tiempo terminado\\n"; cout<<"Score: "<<score<<"\\n"; return 0; }
    cout<<"2) Capital de Ecuador? "; cin>>ans; if(ans=="Quito") score++;
    now = steady_clock::now();
    cout<<"Tiempo total: "<<duration_cast<seconds>(now-start).count()<<" s\\n";
    cout<<"Score: "<<score<<"/2\\n";
    return 0;
}