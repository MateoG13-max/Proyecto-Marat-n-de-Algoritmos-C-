// Ejercicio 127 - Cola circular simple con array dinámico
#include <iostream>
using namespace std;

class Queue {
    int *data; int cap; int head; int tail; int cnt;
    void ensure(){
        if(cap==0){ cap=4; data = new int[cap]; head=0; tail=0; cnt=0; }
        if(cnt==cap){
            int nc = cap*2;
            int *nd = new int[nc];
            for(int i=0;i<cnt;i++) nd[i]=data[(head+i)%cap];
            delete[] data; data=nd; cap=nc; head=0; tail=cnt;
        }
    }
public:
    Queue(): data(nullptr), cap(0), head(0), tail(0), cnt(0) {}
    ~Queue(){ delete[] data; }
    void push(int v){ ensure(); data[tail]=v; tail=(tail+1)%cap; cnt++; }
    int pop(){ if(cnt==0) throw runtime_error("empty"); int v=data[head]; head=(head+1)%cap; cnt--; return v; }
    int size() const { return cnt; }
};

int main(){
    Queue q;
    cout<<"Cola circular - op: push <n>, pop(enter 'p'), salir con 'q'\n";
    while(true){
        string cmd; cin>>cmd;
        if(cmd=="push"){ int v; cin>>v; q.push(v); cout<<"pusheado\n"; }
        else if(cmd=="p"){ if(q.size()==0) cout<<"vacía\n"; else cout<<"pop-> "<<q.pop()<<"\n"; }
        else if(cmd=="q") break;
    }
    return 0;
}
