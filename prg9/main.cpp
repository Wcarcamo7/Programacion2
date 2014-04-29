#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Ingresar 5 numerosy deternimar cuantos son pares y cuantos impares.
Luego debera presentar al final el promedio de los pares e impares.
*/


int main()
{
    int c,numero,par,impar,sumapar,sumaimpar;
    double propar,proimpar;
    par = 0;
    impar = 0;
    sumapar = 0;
    sumaimpar = 0;
    c = 0;

     while (c<5)
    {
        cout<<"Ingrese un numero...: ";
        cin>>numero;

        if (numero % 2==0)
        {
            par++;
            sumapar = sumapar + numero;
        }
        else
        {
            impar++;
            sumaimpar =  sumaimpar + numero;
        }

        c++;

    }

        propar = sumaimpar/impar;
        proimpar = sumaimpar/impar;

    cout<<"\n*";
    cout<<"La cantidad de numeros pares es...: "<<par<<"\n*";
    cout<<"La cantidad de numeros impares es...: "<<impar<<"\n*";
    cout<<"El promedio de numeros pares es...: "<<propar<<"\n*";
    cout<<"El promedio de numeros impares es...: "<<proimpar<<"\n*";

    cout<<"\n*";
    system("PAUSE");
}
