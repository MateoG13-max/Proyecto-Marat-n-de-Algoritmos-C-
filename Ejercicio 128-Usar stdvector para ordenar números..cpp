#include <bits/stdc++.h>
using namespace std;
int main() {
    tuple<string, int, float> alumno("Juan", 18, 9.5);
    cout << "Nombre: " << get<0>(alumno)
         << ", Edad: " << get<1>(alumno)
         << ", Promedio: " << get<2>(alumno) << "\n";
}
