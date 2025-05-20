#include <iostream>
using namespace std;
main(){
int n;
cout<< "Ingrese el valor de n"<<endl;
cin>> n;
if (n > 2)
for ( int i = 2; i < n; i = i+2)
{
    cout<< "los numero pares son:"<<endl;
    cout<<  i<<endl;
}
else {
cout<< "n no puede ser menor a tres";
}









   return 0; 
}