#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

int n,capb,capc,capd;
printf ("Ingrese un numero:");
scanf ("%d", &n);

capb=n;
capd=0;
capc=0;
if (n>0 && n<999999999999999999){
while(capb!=0)
{

capc=capb%10;

capd=capd*10+capc;

capb=capb/10;

}


printf("El numero %d al reves es: %d\n", n, capd);
}
getch();
}
