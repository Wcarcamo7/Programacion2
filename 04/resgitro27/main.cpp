#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Elaborar un procedimiento para ingresar el nombre y las ventas de todos los empleados,
calcular  el ihss y la comision usando una funcion para cada uno de ellos
la comision se calcula asi:
1-20000 3%
20001-50000 4%
50001-> 5%
Hacer los calculos de todo el arreglo de registros usando un procedimiento
presentara todo uando un procedimiento
*/

struct emple
{
    char nombre[30];
    double ventas[3];
    double sumaventa,ihss,comis,tp;
};

const int n=4;
emple emplex[n];

void ingresar (emple emplex[])
{
    for (int i = 0; i<=n; i++)
    {
        _flushall();
        cout<<"Ingresar nombre del empleado: ";
        cin.getline(emplex[i].nombre,30);

        for (int k=0; k<=3; k++)
        {
           cout<<"Ingresar las ventas: z";
           cin>>emplex[i].ventas[k];
        }
    }
}

double seguro(double pb)
{
    if (pb>7000)
    {
        return 245;
    }
    else
    {
        return pb * 0.035;
    }
}

double comision(double sumaventa)
{
    if (sumaventa<=20000)
    {
        return 0.03;
    }
    else if (sumaventa <=50000)
    {
        return 0.04;
    }
    else if (sumaventa > 50000)
    {
        return 0.05;
    }
    else
    {
        return 0;
    }
}

double suma(double ventas[])
{
    double xsum=0;
    for (int i=0; i<=3; i++)
    {
        xsum+= ventas[i];
    }
    return xsum;
}
void calcular(emple emplex[])
{
   for (int i = 0; i<=n; i++)
    {
     emplex[i].sumaventa= suma(emplex[i].ventas);
     emplex[i].comis= emplex[i].sumaventa * comision(emplex[i].sumaventa);
     emplex[i].ihss= seguro(emplex[i].comis);
     emplex[i].tp= emplex[i].comis - emplex[i].ihss;
    }
}

void presentar (emple emplex[])
{
    for (int i = 0; i<=n; i++)
    {
        cout<<"Nombre del empleado  "<<emplex[i].nombre<<"\n";
        cout<<"Total de las ventas  "<<emplex[i].sumaventa<<"\n";
        cout<<"Comision             "<<emplex[i].comis<<"\n";
        cout<<"IHSS                 "<<emplex[i].ihss<<"\n";
        cout<<"Total a pagar        "<<emplex[i].tp<<"\n";
        cout<<"\n";
    }
}

int main()
{
    ingresar(emplex);
    calcular(emplex);
    presentar(emplex);
}
