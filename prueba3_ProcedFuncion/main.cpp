#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*Procedimientos y funciones
Usar un procedimiento para ingresar el nombre, las horas del empleado y el turno
El turno solo puede ser A,B,C, y debera de usar una funcion para ingresarlo y validarlo
-Calcular el pago por hora usando una funcion :
turno  pxh
  A    140
  B    160
  C    180
-Calcular el IHSS usando una funcion (el sueldo >7000 245 si no el 3.5% del sueldo)
Elaborar un procedimiento para calcular el pxh el sueldo bruto, IHSS y el total a pagar
Elaborar un procedimiento para presentar los datos
*/

char nombre[30];
int horast;
char turno;
double pxh,pb,ihss,tp;

int pedirturno()
{ _flushall();
    char turno;
do
{
    cout<<"turno A,B,C...:";
    cin.get(turno);
    _flushall();
}while ((turno !='A') and (turno !='B') and (turno !='C'));

}

void ingreso(char nombre[],int &horast, char &turno)
{
    cout<<"Ingresar nombre: ";
    cin.getline(nombre,30);
    cout<<"Ingresar horas trabajadas: ";
    cin>>horast;
    do
    { _flushall();
        cout<<"ingresar el turno A,B,C..:";
        cin>>turno;
        _flushall();
    }while ((turno !='A') and (turno !='B') and (turno !='C'));
}

void calcular (int horast, char turno, double &pxh, double &pb, double &ihss, double &tp)
{
    switch (turno)
    {
        case 'A':
            pxh=140;
            break;
        case 'B':
            pxh=160;
            break;
        default:
             pxh=180;
            break;
    }

    pb= pxh * horast;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.035*pb;
    }

    tp=pb-ihss;

}

void presentar(double pxh, double pb, double ihss,
               double tp)
{
    cout<<"Pago por Hora es ...:"<<pxh<<"\n";
    cout<<"Pago bruto..:"<<pb <<"\n";
    cout<<"Seguro Social...:"<<ihss <<"\n";
    cout<<"Total a pagar..: "<<tp <<"\n";

}

int main()
{

    ingreso(nombre,horast,turno);
    calcular(horast,turno,pxh,pb,ihss,tp);
    presentar(pxh,pb,ihss,tp);

    cout<<"\n";
    system("PAUSE");
}
