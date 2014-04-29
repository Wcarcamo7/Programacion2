#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Generar 10 numeros pares, validar que el numero sea par un ciclo While y un For
para contar que sean 10 numeros
*/

int main()
{
    srand(time(0));
    int numero,mayor;
    mayor = 0;

    for (int i=0; i<10; i++)
    {
        numero= 1 + rand() % (200-1);

        while (numero % 2 !=0)
        {
            numero= 1 + rand() % (200-1);
        }

        if (numero > mayor)
        {
            mayor = numero;
        }

        cout<<"El numero generado es: "<<numero<<"\n";

    }
        cout<<"\n";
        cout<<"El numero mayor es: "<<mayor<<"\n";

    cout<<"\n";
    system("PAUSE");
}
