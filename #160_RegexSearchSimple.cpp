// Ejercicio 160 - Búsqueda simple de substring (mock regex) en varias líneas
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Cuántas líneas?: "; int n; cin>>n; cin.ignore();
    vector<string> lines(n);
    for(int i=0;i<n;i++) getline(cin, lines[i]);
    cout<<"Patrón a buscar (substring): "; string pat; getline(cin, pat);
    for(int i=0;i<n;i++) if(lines[i].find(pat)!=string::npos) cout<<"Línea "<<i<<": "<<lines[i]<<"\n";
    return 0;
}
