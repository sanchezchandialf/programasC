#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,preciototal,preciofinal;
    int cant;
    printf("ingrese el precio del producto");
    scanf("%f",&a);
    printf("ingrese la cantidad del producto que adquirio");
    scanf("%d",&cant);
    preciototal= a*cant;
    preciofinal=(preciototal) - preciototal*0.15;
    printf("el precio total del producto es %f \n",preciototal);
    printf("el precio que pagara es %f \n",preciofinal);
    system("pause");
    return 0;
    
}