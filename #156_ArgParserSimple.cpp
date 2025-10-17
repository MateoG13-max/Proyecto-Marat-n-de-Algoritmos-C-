// Ejercicio 156 - Parser simple de argumentos - reconoce --key=value
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char** argv){
    map<string,string> kv;
    for(int i=1;i<argc;i++){
        string s=argv[i];
        auto pos = s.find('=');
        if(pos!=string::npos) kv[s.substr(0,pos)] = s.substr(pos+1);
    }
    cout<<"Parsed args:\n"; for(auto &p: kv) cout<<p.first<<" -> "<<p.second<<"\n";
    return 0;
}
