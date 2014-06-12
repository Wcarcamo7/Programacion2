#include <iostream>
#include <stdlib.h>

using namespace std;

void ordenar_numero(int arreglo[], int lon)
{
    int temp;
    for (int i=0; i<lon; i++)
        for (int j=0; j<lon-1; j++)
            if (arreglo[[j]>arreglo[j+1])
            {
                temp-arreglo[j];
                arreglo[j]-arreglo[j+1];
                arreglo[j+1]
            }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
