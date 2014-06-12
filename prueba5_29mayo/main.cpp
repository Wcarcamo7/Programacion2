#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar en un arreglo de registros los siguientes datos: nombre, horas (arreglo de 4)
total horas y pb. Elaborar procedimiento para ingresar los datos del arreglo luego una funcion
para devolver la suma del arreglo de horas. Elaborar un procedimiento para calcular el total de horas
(se llama la funcion suma de horas) y el pb
Presentar todo el arreglo de registros usando un solo procedimiento
*/

struct empleado
{
    char nombre[30];
    int horas[2];
    int totalhoras, pb;
};

const int n=4;
empleado emple[n];

void ingresar (empleado emple[])
{
    for (int i=0 ; i<=n ; i++)
    {
        _flushall();
        cout<<"Ingresar el nombre: ";
        cin.getline(emple[i].nombre,30);

        for (int t=0 ; t<=2 ; t++)
        {
            cout<<"Ingresar las horas: ";
            cin>>emple[i].horas[t];
        }
    }
}

int suma(int horas[])
{
    int xsum=0;
    for (int i=0; i<=3; i++)
    {
        xsum+= horas[i];
    }
    return xsum;

}

void calcular(empleado emple[])
{
    int pxh=150;
    for (int i=0; i<=n; i++)
    {
        emple[i].totalhoras=suma(emple[i].horas);
        emple[i].pb= emple[i].totalhoras * pxh;
    }
}

void presentar(empleado emple[])
{
    for (int i=0; i<=n; i++)
    {
        cout<<"Nombre del empleado: "<<emple[i].nombre<<"\n";
        cout<<"Horas trabajadas: "<<emple[i].totalhoras<<"\n";
        cout<<"Total a pagar: "<<emple[i].pb<<"\n";
        cout<<"\n";
    }
}


int main()
{
    ingresar(emple);
    calcular(emple);
    presentar(emple);
}
