// Ejercicio 161 - Mini social feed: posts en memoria, likes y listado
#include <iostream>
#include <vector>
using namespace std;

struct Post{ int id; string author; string text; int likes; };
int main(){
    vector<Post> feed; int nextId=1;
    cout<<"Comandos: post author text | like id | list | exit\n";
    string cmd;
    while(cin>>cmd){
        if(cmd=="post"){ string a; cin>>a; string t; getline(cin,t); feed.push_back({nextId++,a,t,0}); cout<<"posted\n"; }
        else if(cmd=="like"){ int id; cin>>id; for(auto &p: feed) if(p.id==id){ p.likes++; cout<<"liked\n"; } }
        else if(cmd=="list"){ for(auto &p: feed) cout<<p.id<<" "<<p.author<<" ["<<p.likes<<"] "<<p.text<<"\n"; }
        else if(cmd=="exit") break;
    }
    return 0;
}
