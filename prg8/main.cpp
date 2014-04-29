#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
estructuras de repeticion
ingresar 5 numeros y presentar al final
del ciclo la suma de los numero ingresados   Y cuenta los numeros mayores a 50 Y suma los nums mayores a 50
*/


int main()
{
    int num,suma,suma50;
    int mayor50;
    int c=0;
    suma=0;
    mayor50=0;
    suma50=0;

    while (c<5)
    {
        cout<<"Ingrese un numero...: ";
        cin>>num;

        if (num>50)
        {
            mayor50++;
            suma50+=num;
        }

        c++;         //c = c + 1;---esto es lo mismo (c++) es la forma nativa de C
        suma+=num;   //suma = suma + num;----- lo mismo escrito diferente
    }                //<--final del ciclo

    cout<<"\n*";
    cout<<"La suma de los numeros es...: "<<suma<<"\n*";
    cout<<"La cantidad de numeros mayores a 50 es...: "<<mayor50<<"\n*";
    cout<<"La suma de los numeros mayores a 50 es...: "<<suma50<<"\n*";


    cout<<"\n*";
    system("PAUSE");

}
