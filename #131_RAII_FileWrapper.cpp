// Ejercicio 131 - RAII: wrapper sencillo para manejo de archivo (fopen/fclose)
#include <iostream>
#include <cstdio>
using namespace std;

class FileRAII {
    FILE* f;
public:
    FileRAII(const char* path, const char* mode){ f = fopen(path, mode); if(!f) throw runtime_error("no se pudo abrir archivo"); }
    FILE* get() const { return f; }
    ~FileRAII(){ if(f) fclose(f); }
};

int main(){
    string path; cout<<"Nombre de archivo para escribir: "; cin>>path;
    try{
        FileRAII file(path.c_str(),"w");
        fprintf(file.get(), "Registro de ejemplo\n");
        cout<<"Escrito y cerrado automáticamente al salir del scope\n";
    } catch (const exception& e){ cout<<"Error: "<<e.what()<<"\n"; return 1; }
    return 0;
}
