#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*En un procd ingresar el niombre, las horas y el turno
(validar que el turno sea 1,2,3) luego calcular el pxh, pago de horas
*/

char nombre[30];
int horas,turno;
double pxh,pb,ihss,pt;
char resp;

void pedirsino(char &resp)
{   _flushall();
    do
    {
        cout<<"Desea continuar S/N..:";
        cin.get(resp);

        _flushall();
    }while ((resp !='S') and (resp !='N'));
    cout<<"\n\n";
}

void ingreso(char nombre[], int &horas, int &turno)
{
    cout<<"Ingresar su nombre..:";
    cin.getline(nombre,30);
    cout<<"Horas trabajadas..:";
    cin>>horas;

    do
    {
        cout<<"Ingresar turno 1,2,3..:";
        cin>>turno;
    }while ((turno<1) or (turno>3));
}

void calcular(int horas, int turno, double &pxh, double &pb, double &ihss, double &pt)
{
    switch (turno)
    {
    case 1:
        pxh=100;
        break;
    case 2:
        pxh=130;
        break;
    default:
        pxh=150;
        break;
    }

    pb = pxh * horas;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss = 0.035 * pb;
    }
    pt = pb - ihss;
}

void presentar(double pxh, double pb, double ihss, double pt)
{
    cout<<"Pago por hora es..:"<<pxh<<"\n";
    cout<<"Pago bruto es..:"<<pb<<"\n";
    cout<<"IHSS es..:"<<ihss<<"\n";
    cout<<"Pago total es..:"<<pt<<"\n";
}
int main()
{
    do
    {
        ingreso(nombre,horas,turno);
        calcular(horas,turno,pxh,pb,ihss,pt);
        presentar(pxh,pb,ihss,pt);
        pedirsino(resp);
    }while (resp !='N');

}
