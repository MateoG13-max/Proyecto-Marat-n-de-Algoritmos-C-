#include <iostream>
#include <memory>
using namespace std;

class Converter {
public:
    virtual ~Converter() {}
    virtual double convert(double amount) = 0;
    virtual string name() = 0;
};

class EURtoUSD: public Converter { public: double convert(double a) override { return a * 1.1; } string name() override { return "EUR->USD"; } };
class USDtoEUR: public Converter { public: double convert(double a) override { return a * 0.91; } string name() override { return "USD->EUR"; } };

int main(){
    unique_ptr<Converter> c;
    int op; cout<<"1 EUR->USD, 2 USD->EUR: "; cin>>op;
    if(op==1) c = make_unique<EURtoUSD>(); else c = make_unique<USDtoEUR>();
    double amt; cout<<"Monto: "; cin>>amt;
    cout<<c->name()<<": "<<c->convert(amt)<<"\n";
    return 0;
}