#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*Ingresar un numero entre 1-0 y presentar la tablaa de multiplicar de 1 a 10
hacerlo 5 veces*/

int main()
{
    int numero,resp;
    resp = 0;



    for (int i=0;i<5;i++)
    {

       do
       {
           cout<<"ingresar un numero para mostar su tabla de multiplicar: ";
           cin>>numero;
       }while (!((numero>=1) and (numero<=10)));

       for (int k=1; k<10; k++)
       {
           resp = numero * k;
           cout<<numero<<" * "<<k<<"="<<resp<<"\n";
       }

       cout<<"\n\n";
    }


    cout<<"\n";
    system("PAUSE");
}
