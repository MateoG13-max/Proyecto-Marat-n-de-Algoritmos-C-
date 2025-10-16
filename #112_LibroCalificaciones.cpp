#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Student {
    string name;
    vector<double> grades;
public:
    Student(string n): name(n) {}
    void addGrade(double g){ grades.push_back(g); }
    double average() const { return grades.empty()?0:accumulate(grades.begin(),grades.end(),0.0)/grades.size(); }
    void show() const { cout<<name<<" - Promedio: "<<average()<<"\\n"; }
};

int main(){
    int n; cout<<"¿Cuántos estudiantes?: "; cin>>n;
    vector<Student> clase;
    for(int i=0;i<n;i++){ string name; cout<<"Nombre: "; cin>>name; clase.emplace_back(name);
        int m; cout<<"¿Cuántas notas?: "; cin>>m;
        for(int j=0;j<m;j++){ double g; cout<<"Nota "<<j+1<<": "; cin>>g; clase.back().addGrade(g); }
    }
    cout<<"\\nReporte:\\n"; for(auto &s: clase) s.show();
    return 0;
}