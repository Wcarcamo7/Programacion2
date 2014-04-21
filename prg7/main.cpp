#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Generar un numero aleatorio entre 1 y 350 y determinar el rango en el que se encuentra
1 - 50
51 - 120
121 - 200
mayor a 200
*/

int main()
{
    int numero;

    srand(time(0));

    numero= 1 + rand() % (350-1);

        cout<<"Numero ganerado es...: "<<numero<<"\n";

    if ((numero>=1) and (numero<=50))
    {
        cout<<"El numero esta en el rango de 1-50";
    }
    else if ((numero>=51) and (numero<=120))
    {
        cout<<"El numero esta en el rango de 51-120";
    }
    else if ((numero>=121) and (numero<=200))
    {
        cout<<"El numero esta en el rango de 121-200";
    }
    else if (numero>200)
    {
        cout<<"El numero es mayor a 200";
    }
    else
    {
        cout<<"El numero es negativo";

    }

    cout<<"\n*";
    system("PAUSE");
}
