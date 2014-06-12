#include<stdio.h>
#include<conio.h>
int v[100000],n;
void num_ordenados()
{
 int valor_temporal;
 for (int q=0;q<n-1;q++)
 {
  for (int w=q+1;w<n;w++)
  {
   if (v[w]<v[q])
   {
    valor_temporal=v[w];
    v[w]=v[q];
    v[q]=valor_temporal;
   }
  }
 }
}
void orden()
{
 for (int t=0;t<n;t++)
 {
  printf("\t%d\n",v[t]);
 }
}
main()
{
 printf("Ingrese cantidad de numeros: ");
 scanf("%d",&n);
 for (int i=0; i<=n-1;i++)
 {
  printf("\nIngrse el numero %d: ",i+1);
  scanf("%d",&v[i]);
 }
 num_ordenados();
 printf("\n");
 printf("\nNumeros ordenados:\n\n");
 orden();
}

