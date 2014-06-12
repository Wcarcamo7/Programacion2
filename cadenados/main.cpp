#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*ingresar una cadena de 30 letras, luego usando un procedimiento
cambier las vocales de la cadena por una X
*/


void ingreso(char cadena[])
{
    cout<<"Ingresar cadena de 30 letras max...:";
    cin.getline(cadena,30);
}

void cambiar(char cadena[])
{
    for (int i=0; i<strlen(cadena); i++)
    {
        switch (cadena[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cadena[i]='X';
                break;
            default:
                break;

        }
    }
}
int main()
{
    char cadena[30];
    ingreso(cadena);
    cambiar(cadena);
    cout<<"Cadena cambiada..: "<<cadena<<"\n";
}
