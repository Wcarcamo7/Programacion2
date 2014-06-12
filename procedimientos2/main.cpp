#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/* Ingresar 3 numeros usando un proce, luego determiar el mayo usando otro proce y persentarlo en el main*/

void ingreso(int &num1, int &num2, int &num3)
{
    cout<<"Ingresar primer numero: ";
    cin>>num1;
    cout<<"Ingresar segundo numero: ";
    cin>>num2;
    cout<<"Ingresar tercer numero: ";
    cin>>num3;
}

void mayor(int num1, int num2, int num3, int &mayors)
{
    if((num1 > num2) and (num1 > num3))
    {
        mayors = num1;
    }
    else if (num2 > num3)
    {
        mayors = num2;
    }
    else
    {
        mayors = num3;
    }
}
int main()
{
    int num1,num2,num3,mayors;
    ingreso(num1,num2,num3);
    mayor(num1,num2,num3,mayors);
    cout<<"El numero mayor es: "<<mayors<<"\n";
}
