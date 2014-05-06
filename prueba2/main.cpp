#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

using namespace std;

int main()

{

int a,fact,cont;

printf("Introduzca un numero entero:");

scanf("%d",&a);

if(a<0)

printf("\nPor ser un numero negativo no tiene factorial");

else

{

cont=1;

fact=1;

while(cont<=a)

{

fact=fact*cont;

cont++;

}

printf("\nEl factorial de %d es %d\n",a,fact);

}

}
