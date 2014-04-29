#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
 /*
 Prueba1 > Generar 10 numeros aleatorios y contar los numeros que son divisibles entre 5
 y obtenar su promedio, obtener el promedio de todos los numeros ingresados y presentar la suma.
 */

int main()
{
    int c,numero,cdiv5,protodos,sumadiv5,sumatodos;
    double prodiv5;
    c = 0;
    cdiv5 = 0;
    sumatodos = 0;
    sumadiv5 = 0;

    srand(time(0));

    while (c<10)
    {
        numero= 1 + rand() % (100-1);
        cout<<"El numero generados es...: "<<numero<<"\n*";

        if (numero % 5==0)
        {
            cdiv5++;
        }

        c++;
        sumatodos+=numero;
        sumadiv5+=numero;
    }

    if (cdiv5>1)
    {
     prodiv5 = sumadiv5/10;
    }
    else
    {
    prodiv5 = 00000;
    }

    protodos = sumatodos/10;

    cout<<"\n*";
    cout<<"Los numeros divisibles entre 5 son...: "<<cdiv5<<"\n*";
    cout<<"El promedio de los numeros divisibles entre 5 es...: "<<prodiv5<<"\n*";
    cout<<"El promedio de todo los numeros es...: "<<protodos<<"\n*";
    cout<<"La suma de todos los numeros es...: "<<sumatodos<<"\n*";

    cout<<"\n*";
    system("PAUSE");
}
