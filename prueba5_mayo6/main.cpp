#include <iostream>

using namespace std;
/*
se tiene un arreglo de 5 lineas con 6 columnas. se tiene que dejar la ultima columna para obtener
el promedio de las 4 mejores columnas. Para obtener este promedio se suman todas las columnas
de la linea y se le resta el menor de las cinco lineas y se divide entre 4
*/

const int lin=4;
const int col=5;
int num [lin][col];

void ingreso(int num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        for (int c=0;c<=col-1;c++)
        {
            cout<<"Numero["<<l<<","<<c<<"]...";
            cin>>num[l][c];
        }
    }
}

void sumar (int num[lin][col])
{
    for (int l=0;l<=lin-1;l++)
        {
            num[col][l]=0;
            for(int c=0;c<=col;c++)
            {
               num[col][c] += num[c][l];
            }
        }
}


void presentar(int num[lin][col])
{
    for (int l=0;l<=lin;l++)
    {
        for (int c=0;c<=col;c++)
        {
            cout<<num[l][c]<<" | ";
        }
        cout<<"\n";
    }
}

int main()
{
    ingreso(num);
    sumar(num);
    presentar(num);
}
