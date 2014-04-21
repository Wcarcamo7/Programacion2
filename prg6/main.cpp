#include <iostream>
#include <stdlib.h>

using namespace std;


/*
ingresar un numero indentificar si es positivo negativo o cero
*/


int main()
{
    int numero;
    cout<<"ingrese un numero: ";
    cin>>numero;

    if (numero < 0)
    {
       cout<<"El numero es negativo (-)";
    }

    else if (numero > 0)
    {
       cout<<"El numero es positivo (+)";
    }

    else
    {
       cout<<"El numero es cero (0)";
    }

    cout<<"\n";
    system("PAUSE");
}
