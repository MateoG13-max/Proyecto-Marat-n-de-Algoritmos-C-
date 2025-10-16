#include <iostream>
#include <vector>
using namespace std;

class Cuenta {
protected:
    string titular;
    double saldo;
public:
    Cuenta(string t, double s): titular(t), saldo(s) {}
    virtual void depositar(double m){ saldo += m; }
    virtual bool retirar(double m){
        if(m<=saldo){ saldo-=m; return true; }
        return false;
    }
    virtual void mostrar(){ cout<<titular<<": $"<<saldo<<"\n"; }
    virtual ~Cuenta() {}
};

class Ahorro : public Cuenta {
    double interes;
public:
    Ahorro(string t,double s,double i): Cuenta(t,s), interes(i) {}
    void aplicarInteres(){ saldo += saldo * interes; }
};

int main(){
    vector<Cuenta*> cuentas;
    cuentas.push_back(new Cuenta("Ana",100));
    cuentas.push_back(new Ahorro("Luis",200,0.02));
    cuentas[1]->depositar(50);
    for(auto c: cuentas) c->mostrar();
    Ahorro* ah = dynamic_cast<Ahorro*>(cuentas[1]);
    if(ah){ ah->aplicarInteres(); cout<<"Después de interés:\\n"; ah->mostrar(); }
    for(auto c: cuentas) delete c;
    return 0;
}