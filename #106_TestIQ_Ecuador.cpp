#include <iostream>
#include <vector>
using namespace std;

class Pregunta {
public:
    string texto;
    string correcta;
    Pregunta(string t, string c): texto(t), correcta(c) {}
};

class QuizEcuador {
    vector<Pregunta> preguntas;
public:
    QuizEcuador(){
        preguntas.emplace_back("¿Capital de Ecuador?","Quito");
        preguntas.emplace_back("¿Moneda de Ecuador?","Dólar");
        preguntas.emplace_back("¿Provincia con capital Guayaquil?","Guayas");
    }
    void run(){
        int score=0; string resp;
        for(auto &p: preguntas){
            cout<<p.texto<<" "; cin>>resp;
            if(resp==p.correcta) { score++; cout<<"Correcto\\n"; } else cout<<"Incorrecto (respuesta: "<<p.correcta<<")\\n";
        }
        cout<<"Puntaje: "<<score<<"/"<<preguntas.size()<<"\\n";
    }
};

int main(){ QuizEcuador q; q.run(); return 0; }