#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*Ingresar 2 numero usando un procedimiento luego usando otro procedimiento sumar
numeros y luego presentarlos*/

void ingreso(int &num1, int &num2)
{
    cout<<"Ingresar primer numero: ";
    cin>>num1;
    cout<<"Ingresar segundo numero: ";
    cin>>num2;
}

void sumar (int num1, int num2, int &suma)
{
    suma = num1 + num2;
}

int main()
{
    int num1,num2,suma;
    ingreso(num1,num2);
    sumar(num1,num2,suma);
    cout<<"La suma es: "<<suma<<"\n";
}
