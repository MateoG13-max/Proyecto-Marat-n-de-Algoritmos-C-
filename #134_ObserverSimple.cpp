// Ejercicio 134 - Observer simple: sujeto notifica a observadores
#include <iostream>
#include <vector>
using namespace std;

class Observer { public: virtual ~Observer(){} virtual void onNotify(const string& msg)=0; };
class Subject {
    vector<Observer*> subs;
public:
    void subscribe(Observer* o){ subs.push_back(o); }
    void notifyAll(const string& m){ for(auto s: subs) s->onNotify(m); }
    ~Subject(){ for(auto s: subs) delete s; }
};

class ConsoleObserver: public Observer { public: void onNotify(const string& msg) override { cout<<"Notificación: "<<msg<<"\n"; } };

int main(){
    Subject subj;
    subj.subscribe(new ConsoleObserver());
    subj.subscribe(new ConsoleObserver());
    subj.notifyAll("Evento importante");
    return 0;
}
