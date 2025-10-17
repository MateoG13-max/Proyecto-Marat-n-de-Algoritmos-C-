// Ejercicio 132 - Patrón Command: ejecutar operaciones a través de objetos
#include <iostream>
#include <vector>
using namespace std;

class Command { public: virtual ~Command(){} virtual void execute() = 0; };

class PrintCommand: public Command {
    string msg;
public: PrintCommand(string m): msg(m){} void execute() override{ cout<<msg<<"\n"; }
};

class Invoker {
    vector<Command*> history;
public:
    void run(Command* c){ c->execute(); history.push_back(c); }
    ~Invoker(){ for(auto p: history) delete p; }
};

int main(){
    Invoker inv;
    inv.run(new PrintCommand("Hola desde Command 1"));
    inv.run(new PrintCommand("Otra instrucción"));
    return 0;
}
