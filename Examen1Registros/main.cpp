#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct empleado
{
    char nombre[30];
    int turno,horas;
    double sueldo,pxh,pb,ihss,tp;
    char obs[15];
};
empleado emple;

int validarTurno()
{
    int turno;
    do
    {
        cout<<"Ingresar el 1,2,3...:";
        cin>>turno;
    }while((turno<1)or (turno>3));
    return turno;
}

double pxhora(empleado &emple)
{
    switch(emple.turno)
    {
      case 1:
      return 200;
      break;
      case 2:
      return 150;
      break;
      default:
      return 180;
      break;
    }
}
double seguro(empleado &emple)
{
    if (emple.sueldo>7000)
        return 245;
    else
        return 0.035*emple.sueldo;
}

void ingresar(empleado &emple)
{

    cout<<"ingresar nombre...:";
    cin.getline(emple.nombre,30);
    cout<<"Horas trabajadas...:";
    cin>>emple.horas;
    emple.turno=validarTurno();
}

void calcular(empleado &emple)

{
    emple.pxh = pxhora(emple.turno);
    emple.pb = emple.horas * emple.pxh;
    emple.tp = emple.pb- emple.ihss;
}

void presentar(empleado emple)

{
    cout<<"pago por hora es...:"<<emple.pxh<<"\n";
    cout<<"pago bruto es..:"<<emple.pb<<"\n";
    cout<<"seguro social es..:"<<emple.ihss<<"\n";
    cout<<"total a pagar es..:"<<emple.tp<<"\n";
}

char pedirsino()
{  _flushall();
    char resp;
    do {
        cout<<"desea continuar...:";
        cin.get(resp);
        _flushall();
    }while((resp!='S') and (resp!='N'));
    return resp;
}

int main()
{
    pxhora(emple);
    seguro(emple);
    ingresar(emple);
    calcular(emple);
    presentar(emple);

int maxisueldo;
char maxnombre;

    do
    {
    ingresar(emple);
    calcular(emple);
    presentar(emple);
    if (emple.tp>maxisueldo)
    {
        maxisueldo=emple.tp;
        strcpy(maxnombre,emple.nombre);
    }

     resp=pedirsino();

    }while(resp!='N');
cout<<"empleado mayor.....:"<<maxnombre<<"mayor sueldo...."<<maxisueldo<<"\n";

}
