#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
int numero;

    for (int i=0; i<5; i++)
   {

       do
       {
        cout<<"Ingrese un numero...: ";
        cin>>numero;
       }while (!((numero>=50) and (numero<=100)));
   }


    cout<<"\n";
    system("PAUSE");
}
