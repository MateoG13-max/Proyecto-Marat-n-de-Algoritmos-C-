#include <iostream>
#include <vector>
using namespace std;

class PreguntaBase {
public:
    virtual ~PreguntaBase() {}
    virtual void preguntar() = 0;
};

class PregSiNo : public PreguntaBase {
    string texto;
    bool correcta; // true = sí
public:
    PregSiNo(string t, bool c): texto(t), correcta(c) {}
    void preguntar() override {
        string r; cout<<texto<<" (si/no): "; cin>>r;
        bool resp = (r=="si");
        cout<<(resp==correcta ? "Correcto\\n" : "Incorrecto\\n");
    }
};

int main(){
    vector<PreguntaBase*> quiz;
    quiz.push_back(new PregSiNo("¿El agua hierve a 100°C a nivel del mar?", true));
    quiz.push_back(new PregSiNo("¿Los humanos tienen 3 pulmones?", false));

    for(auto p: quiz) p->preguntar();
    for(auto p: quiz) delete p;
    return 0;
}