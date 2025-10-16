#include <iostream>
#include <memory>
using namespace std;

class Character {
public:
    string name; int hp;
    Character(string n,int h): name(n), hp(h) {}
    virtual ~Character(){}
    virtual void attack(Character& other) = 0;
    bool isAlive(){ return hp>0; }
};

class Warrior: public Character {
public:
    Warrior(string n): Character(n,120) {}
    void attack(Character& other) override { int dmg = 15; other.hp -= dmg; cout<<name<<" golpea por "<<dmg<<"\\n"; }
};

class Mage: public Character {
public:
    Mage(string n): Character(n,80) {}
    void attack(Character& other) override { int dmg = 25; other.hp -= dmg; cout<<name<<" lanza hechizo por "<<dmg<<"\\n"; }
};

int main(){
    unique_ptr<Character> p1 = make_unique<Warrior>("Héroe");
    unique_ptr<Character> p2 = make_unique<Mage>("Hechicero");
    while(p1->isAlive() && p2->isAlive()){
        p1->attack(*p2); if(!p2->isAlive()) break;
        p2->attack(*p1);
    }
    cout<<"Ganador: "<<(p1->isAlive()?p1->name:p2->name)<<"\\n";
    return 0;
}