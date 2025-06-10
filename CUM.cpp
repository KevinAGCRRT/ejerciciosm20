#include <iostream>
using namespace std;
struct estudiante {
string nombre;
int edad;
string carnet;
float CUM;
};
int main(){
int cantidad;
cout<< "ingrese la cantidad de estudiantes que van a calcular su CUM";
cin>> cantidad;

estudiante estudiantes[cantidad];
for (int i = 0; i < cantidad; i++)
{
    cout<< "ingrese su nombre"<<i+1<<endl;
    cin>> etudiantes[i].nombre<<endl;
    cout<< "ingrese su edad"<<i+1<<endl;
    cin>> estudiantes[i].edad<<i+1<<endl;
    cout<< "ingrese su carner"<<i+1<<endl;
    cin>> estudiantes[i].canet<<endl;
}
estudiante notas[4];
for ( int j = 0; j < cantidad; j++)
{
    cout<<"ingrese las notas de sus materias"<<j+1<<endl;
    cin>> estudiantes[j].notas;
}



    return 0;
}