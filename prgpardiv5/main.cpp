#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
genere un numero y determine si un numero es par o impar y divisible entre 5
*/

int main()
{   int numero;

    srand(time(0));

    //cout<<" Numero... ";
    //cin>>numero;

    numero= 1 + rand() % (1000-1);
    cout<<"El numero generado es: "<<numero<<"\n";

    if ((numero % 5==0) and (numero % 2==0))
    {
        cout<<"EL NUMERO ES DIVISIBLE ENTRE 2 Y 5";
    }
    else
    {
        cout<<"EL NUMERO NO ES DIVISIBLE ENTRE 2 Y 5";
    }

    cout<<"\n";

    system("PAUSE");
}
