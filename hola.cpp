#include <iostream>
using namespace std; 
main (){
int n, modulo, primo = 1;
cout<< "ingrese un numero y le diremos si es primo"<<endl;
cin>> n;
for (int i =n-1; i >= 2; i --)
{
    modulo = n%i;
if (modulo == 0){
cout<< "no es primo";
primo = 0;
break;
}
}
if (primo == 1){
    cout<< "es primo";
}



















   return 0; 
}