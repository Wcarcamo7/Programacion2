#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
ingresar un numero y escribir en la pantalla el rango que se encuentra el numero
rango
1-100
101-300
301-500
500-
*/

using namespace std;

int main()
{
    int numero;

    srand(time(0));

    //cout<<"inresar un numero entero...>";
    //cin>>numero;

    numero= 1 + rand() % (500-1);

    cout<<"Numero ganerado es...:"<<numero<<"\n";

    if ((numero>=1) and (numero<=100))
    {
        cout<<"El numero esta en el rango de 1-100";
    }
    else if ((numero>=101) and (numero<=300))
    {
        cout<<"El numero esta en el rango de 101-300";
    }
    else if ((numero>=301) and (numero<=500))
    {
        cout<<"El numero esta en el rango de 301-500";
    }
    else if (numero>500)
    {
        cout<<"El numero es mayor a 500";
    }
    else
    {
        cout<<"El numero es negativo";
    }

    system("PAUSE");
}
