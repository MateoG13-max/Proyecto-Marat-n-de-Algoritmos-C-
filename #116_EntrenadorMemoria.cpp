#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class SequenceGenerator {
public:
    SequenceGenerator(){ srand((unsigned)time(nullptr)); }
    vector<int> generate(int n){ vector<int> s(n); for(int i=0;i<n;i++) s[i]=rand()%90+10; return s; }
};

class Trainer {
public:
    void run(){
        SequenceGenerator gen;
        int n; cout<<"Longitud de secuencia: "; cin>>n;
        auto seq = gen.generate(n);
        cout<<"Memoriza:\\n"; for(auto v: seq) cout<<v<<" "; cout<<"\\nPresiona Enter..."; cin.ignore(); cin.get();
        #if defined(_WIN32)
        system("cls");
        #else
        system("clear");
        #endif
        int correct=0;
        for(int i=0;i<n;i++){ int r; cout<<"Número #"<<i+1<<": "; cin>>r; if(r==seq[i]) correct++; }
        cout<<"Aciertos: "<<correct<<"/"<<n<<"\\n";
    }
};

int main(){ Trainer t; t.run(); return 0; }