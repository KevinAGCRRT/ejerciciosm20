#include <iostream>
//funciones
float suma (float numero1, float numero2){
    float resultado =0;
    resultado= numero1+numero2;
    return resultado;
}
float resta( float numero1, float numero2){
   float resultador= numero1 - numero2;
    return resultador;

}
float mult (float numero1, float numero2){
 float resultadom = numero1*numero2;
 return resultadom;
}
float div(float numero1, float numero2) {
    if (numero2 == 0) {
        return 1000; 
    } else if (numero1 < numero2) {
        return 2000; 
    } else {
        return numero1 / numero2;
    }
}
using namespace std;
int main (){
float numero1, numero2, numero3,sumatotal=0, numero4 = 4, numero5 =5,sumatoria2=0, resulr=0,resultm=0,resultdiv=0;
int tipo;
cout<< "operaciones"<<endl;
cout<< "ingrese el primer numero"<<endl;
cin>> numero1;

cout<< "ingrese su segundo numero"<<endl;
cin>> numero2; 
cout<< "ingrese el tipo de operacion que desea hacer, 1 suma, 2 resta, 3 multiplicacion, 4 division."<<endl;
cin>> tipo;
switch (tipo)
{
case 1:
sumatotal= suma(numero1, numero2);
cout<< "el resultado de la suma es"<<endl;
cout<< sumatotal<<endl; 
    break;
case 2:
resulr = resta(numero1, numero2);
cout<< "el resultado de la resta es"<<endl;
cout<<resulr<<endl;
break;
case 3:
resultm  = mult(numero1, numero2);
cout<< "el resultado de la multiplicacion es"<<endl;
cout<<resultm<<endl;
break;
case 4:
resultdiv = div(numero1, numero2); 
if (resultdiv == 1000) {
    cout << "No se puede dividir entre cero." << endl;
} else if (resultdiv == 2000) {
    cout << "No se puede dividir porque el dividendo es menor que el divisor." << endl;
} else {
    cout << "El resultado de la división es: " << resultdiv << endl;
}
break;
default:
cout<< "selecciones una opcion valida";
    break;
}


// sumatoria2 = suma(numero5, numero4);
//cout<< "el resultado de la suma es"<<endl;
//cout<<sumatoria2<<endl;

return 0;
}