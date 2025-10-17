// Ejercicio 137 - Mini key-value store en memoria con persistencia simple a archivo
#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main(){
    map<string,string> db;
    string cmd;
    cout<<"Comandos: set key value | get key | save filename | load filename | exit\n";
    while(cin>>cmd){
        if(cmd=="set"){ string k,v; cin>>k>>v; db[k]=v; cout<<"ok\n"; }
        else if(cmd=="get"){ string k; cin>>k; cout<<(db.count(k)?db[k]:"<no existe>")<<"\n"; }
        else if(cmd=="save"){ string f; cin>>f; ofstream out(f); for(auto &p: db) out<<p.first<<'='<<p.second<<'\n'; out.close(); cout<<"guardado\n"; }
        else if(cmd=="load"){ string f; cin>>f; ifstream in(f); string line; db.clear(); while(getline(in,line)){ auto pos=line.find('='); if(pos!=string::npos) db[line.substr(0,pos)]=line.substr(pos+1); } cout<<"cargado\n"; }
        else if(cmd=="exit") break;
    }
    return 0;
}
