#include <stdio.h>
#include <stdlib.h>
#define rep 5
int main(int argc, char const *argv[])
{
    float pp,totalparcial,totalgeneral ,cant;
    printf("ingrese el precio del producto");
    scanf("%f",&pp);
    printf("ingrese cantidad de productos que va a comprar");
    scanf("%f",&cant);
    totalparcial=pp*cant;
    totalgeneral=totalparcial+(totalparcial*0.15);
    printf("usted debe pagar %.1f",totalgeneral);
    system("pause");
    return 0;
}
