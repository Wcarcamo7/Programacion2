#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*
con la estructura:
alumno
arreglo parciaales (3 parciales)
promedio
obs

Elaborar un arreglo de registro 5 alumnos
Elabrar un procedimient para el ingreso de datos
Elaborar una funcion para devolver el promedio ingresando el arreglo parciales
Elaborar un procedimiento para calcular el promedio (se llama la funcion promedio) y la obs
elaborar un procedimiento para presentar un registro de alumnos
y otro para presentar todos los registros llamando el procedimiento de presentar un regidtro
*/

struct alum
{
    char nombre[30];
    int parcial[2];
    int promedio;
    char obs[15];
};

const int n=4;
alum alumn[n];

void ingresar (alum alumn[])
{
    for (int i = 0; i<=n; i++)
    {
        _flushall();
        cout<<"Ingresar nombre del alumno: ";
        cin.getline(alumn[i].nombre,30);

        for (int k=0; k<=2; k++)
        {
           cout<<"Ingresar la nota parcial: ";
           cin>>alumn[i].parcial[k];
        }
    }
}

int suma(int parcial[])
{
    int xsum=0;
    for (int i=0; i<=3; i++)
    {
        xsum+= parcial[i];
    }
    return xsum;
}

void calcular (alum alumn[])
{
    int sumaparcial =0;
    for (int i = 0; i<=n; i++)
    {
     sumaparcial= suma(alumn[i].parcial);
     alumn[i].promedio= sumaparcial / 3;
    }
}

void presentar(alum alumn)
{
    cout<<"Nombre del alumno      "<<alumn.nombre<<"\n";
    cout<<"Promedio               "<<alumn.promedio<<"\n";
    cout<<"Observaciones          "<<alumn.obs<<"\n";
    cout<<"\n";
}

void presentartodos(alum alumn[])
{
    for (int i = 0; i<=n; i++)
    {
        presentar(alumn[i]);
    }
}

int main()
{
    ingresar(alumn);
    calcular(alumn);
    presentartodos(alumn);
}
