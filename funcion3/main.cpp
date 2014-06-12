#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*Usar la base y el exponente usando un procedimiento, luego
determinar usando un funcionla potencia y presentar en el main*/

int calcular(int base, int expo)
{
    int resul;

    for (int cexpo=0; cexpo<expo; cexpo++)
    {
        if (cexpo<=expo)
        {
            resul=base*base;
            return resul;
        }

    }
}

void ingreso(int &base, int &expo)
{
    cout<<"Ingresar la base: ";
    cin>>base;
    cout<<"Ingresar el exponente: ";
    cin>>expo;
}


int main()
{
    int base,expo,resul;
    ingreso(base,expo);
    resul=calcular(base,expo);
    cout<<"La base es..:"<<base<<"\n";
    cout<<"El exponencial es..:"<<expo<<"\n";
    cout<<"El resultado es..:"<<resul<<"\n";

    cout<<"\n";
    system("PAUSE");
}
