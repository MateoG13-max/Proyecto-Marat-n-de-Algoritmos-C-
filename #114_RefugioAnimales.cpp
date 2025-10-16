#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    string nombre;
    Animal(string n): nombre(n) {}
    virtual void speak() = 0;
    virtual ~Animal(){}
};

class Perro: public Animal {
public: Perro(string n):Animal(n){} void speak() override{ cout<<nombre<<": Guau!\\n"; }
};
class Gato: public Animal {
public: Gato(string n):Animal(n){} void speak() override{ cout<<nombre<<": Miau!\\n"; }
};

int main(){
    vector<Animal*> shelter;
    shelter.push_back(new Perro("Rocky"));
    shelter.push_back(new Gato("Misu"));
    for(auto a: shelter) a->speak();
    for(auto a: shelter) delete a;
    return 0;
}