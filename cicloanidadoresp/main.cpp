#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/* Ingresar un numero entero luego preguntar si desea continuar,
al fnal presentar cuantos fueron numero pares e impares
*/

int main()
{
    int numero,cp,ci;
    char resp;
    cp = 0;
    ci = 0;

    do
    {
        cout<<"Ingresar un numero: ";
        cin>>numero;
        if (numero%2==0)
        {
            cp++;
        }
        else
        {
            ci++;
        }
            _flushall();
        do
        {
            cout<<"Desea continuar S/N: ";
            cin.get(resp);
            _flushall();

        }while ((resp !='S') and (resp !='N'));

    }while ((resp !='N'));
    cout<<"Contador de pares: "<<cp<<"\n";
    cout<<"Contador de impares: "<<ci<<"\n";
}
