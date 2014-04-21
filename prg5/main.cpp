#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
determiner si un numero es par o impar
*/

int main()
{   int numero;
    cout<<" Numero... ";
    cin>>numero;

    if (numero % 2==0)
    {
        cout<<"EL NUMERO ES PAR";
    }
    else
    {
        cout<<"EL NUMERO ES IMPAR";
    }

    cout<<"\n";

    system("PAUSE");
}
