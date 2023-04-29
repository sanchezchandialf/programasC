#include <stdio.h>
#include <stdlib.h>
#define v 5 
int main(int argc, char const *argv[])
{
    float p,total,totalp,totalf,cant,desc;
    int i;
    totalf=0;
    printf("Programa de Farmacia\n");
    for (i = 1; i <v; i++)
    {
        printf("ingrese el precio de lista del producto\n");
        scanf("%f",&p);
        desc=p-(p*0.15);
        printf("ingrese la cantidad de productos que comprara\n");
        scanf("%f",&cant);
        total=desc*cant;
        totalp=totalp+total;
        printf("total parcial a pagar %.1f\n",totalp);
        totalf=totalf+totalp;     
    }
    printf("usted debera abonar %.1f",totalf);
    system("pause");    
    return 0;
}
