// Ejercicio 165 - Registro simple de "plugins" mediante funciones registradas
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main(){
    vector<function<void()>> plugins;
    plugins.push_back([](){ cout<<"Plugin A ejecutado\n"; });
    plugins.push_back([](){ cout<<"Plugin B ejecutado\n"; });
    cout<<"Ejecutando plugins:\n";
    for(auto &p: plugins) p();
    return 0;
}
