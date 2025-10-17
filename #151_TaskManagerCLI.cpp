// Ejercicio 151 - Gestor de tareas CLI con persistencia (guardar/cargar)
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Task{ string id; string desc; bool done; };
int main(){
    vector<Task> tasks;
    string cmd;
    cout<<"comandos: add id desc | list | done id | save file | load file | exit\n";
    while(cin>>cmd){
        if(cmd=="add"){ Task t; cin>>t.id; getline(cin,t.desc); t.done=false; tasks.push_back(t); cout<<"added\n"; }
        else if(cmd=="list"){ for(auto &t: tasks) cout<<t.id<<" ["<<(t.done? "x":" ")<<"] "<<t.desc<<"\n"; }
        else if(cmd=="done"){ string id; cin>>id; for(auto &t: tasks) if(t.id==id) t.done=true; cout<<"marked\n"; }
        else if(cmd=="save"){ string f; cin>>f; ofstream out(f); for(auto &t: tasks) out<<t.id<<'|'<<t.done<<'|'<<t.desc<<'\n'; cout<<"saved\n"; }
        else if(cmd=="load"){ string f; cin>>f; ifstream in(f); tasks.clear(); string line; while(getline(in,line)){ if(line.empty()) continue; auto p1=line.find('|'); auto p2=line.find('|',p1+1); Task t; t.id=line.substr(0,p1); t.done = line.substr(p1+1,p2-p1-1)=="1"; t.desc=line.substr(p2+1); tasks.push_back(t);} cout<<"loaded\n"; }
        else if(cmd=="exit") break;
    }
    return 0;
}
