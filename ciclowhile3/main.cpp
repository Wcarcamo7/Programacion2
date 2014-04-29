#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Ingresar 5 numeros y presentar al final del ciclo cual es el mayor.
*/

int main()
{

    int c,numero,mayor,menor;
    mayor = 0;
    menor = 999999;
    c = 0;

    while (c<5)
    {
        cout<<"Ingrese un numero...: ";
        cin>>numero;

        if (numero>mayor)
        {
            mayor = numero;
        }
        else if ((numero<menor))
        {
            menor = numero;
        }

        c++;
    }

    cout<<"\n*";
    cout<<"El numero mayor es...: "<<mayor<<"\n*";
    cout<<"El numero menor es...: "<<menor<<"\n*";

    cout<<"\n*";
    system("PAUSE");

}
