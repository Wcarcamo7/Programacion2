#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Ingresar el mes , el d�a , el a�o y determinar si la fecha esta correcta.
Se tiene que validar si el mes esta correcto, si el d�a corresponde al mes y si el a�o es mayor a cero
*/

int main()
{
    int dia,mes,ano;

    cout<<"ingrese el a�o...: ";
    cin>>ano;


    cout<<"ingrese el mes...: ";
    cin>>mes;

    if ((ano > 0) and (mes <=12))
    {

          cout<<"ingrese el dia...: ";
          cin>>dia;


          if ((mes == 1) and (dia <= 31))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 2) and (dia <= 28))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 3) and (dia <= 31))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 4) and (dia <= 30))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 5) and (dia <= 31))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 6) and (dia <= 30))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 7) and (dia <= 31))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 8) and (dia <= 31))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 9) and (dia <= 30))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 10) and (dia <= 31))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 11) and (dia <= 30))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }

          else if ((mes == 12) and (dia <= 31))
          {
            cout<<"\n*";
            cout<<"La fecha ingresada es correcta";
          }
          else
          {
              cout<<"\n*";
              cout<<"el dia esta fuera de rango";
          }

    }
    else
    {
        cout<<"\n*";
        cout<<"el mes o a�o estan fuera de rango";
    }

    cout<<"\n*";
    system("PAUSE");
}
