#include <iostream>
using namespace std;
struct estudiante{
int edad;
string nombre;
string carnet;
char sexo;
string carrera;
};
int main (){
    /*
estudiante estudiante1={20, "juan","000026824",'m',"informatica"};
cout<< "edad:"<<estudiante1.edad<<endl;
cout<< "nombre"<<estudiante1.nombre<<endl;
cout<< "sexo"<<estudiante1.sexo<<endl;
cout<<"carrera"<<estudiante1.carrera<<endl;*/

int cantidad;
cout<< "ingrese la cantidad de estudiantes";
cin>> cantidad;
estudiante estudiantes[cantidad];
for (int i = 0; i < cantidad; i++)
{
    cout<< "ingrese su edad"<<i+1<<endl;
    cin>> estudiantes[i].edad;
    cout<< "ingrese su nombre"<<i+1<<endl;
    cin>> estudiantes[i].nombre;
    cout<< "ingrese su sexo"<<i+1<<endl;
    cin>> estudiantes[i].sexo;
    cout<<"ingrese su carrera"<<i+1<<endl;
    cin>> estudiantes[i].carrera;
}

for (int i = 0; i < cantidad; i++)
{
     cout<< "ingrese su edad"<<i+1<<endl;
    cin>> estudiantes[i].edad;
    cout<< "ingrese su nombre"<<i+1<<endl;
    cin>> estudiantes[i].nombre;
    cout<< "ingrese su sexo"<<i+1<<endl;
    cin>> estudiantes[i].sexo;
    cout<<"ingrese su carrera"<<i+1<<endl;
    cin>> estudiantes[i].carrera;
}












    return 0;
}