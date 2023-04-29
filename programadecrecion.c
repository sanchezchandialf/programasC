#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char const *argv[])
{
    float val,aux,resultado;
    int i,deprec,anual,eleccion,n,anio,u,resul,p;
    anio=1;
    printf("--BIENVENIDO AL PROGRAMA DE DEPRECIACION--");
    printf("INGRESE EL VALOR DEL OBJETO");
    scanf("%f",&aux);
    printf("INGRESE  número de anios por los que se depreciará el objeto");
    scanf("%d",&n);
    u=n;
    printf("ELIJA UNA ENTRE LAS SIGUIENTES OPCIONES");
    printf("1-METODO LINEA RECTA");
    printf("1-METODO BALANCE DOBLEMENTE DECLINANTE");
    printf("3-METODO SUMA DE LOS DIGITOS");
    printf("4-SALIR");
    scanf("%d",&eleccion);
    switch (eleccion)
    {
    case 1:
        printf("usted eligio el metodo de linea recta");
        resultado=aux/n;
        val=resultado;
        printf("la depreciacion es de %f",val);
        break;
    case 2:
        printf("usted eligio el metodo de balance doblemente declinante");
        for (i = 1; i <=n; i++)
        {
            resultado=2/n *aux;
            val=aux-resultado;
            anio=anio+1;
            printf("en el anio %d %f",anio,"la depreciacion es",val);
        }
        break;
    case 3:
            printf("usted eligio el metodo de suma de los digitos");
            for (int i = 1; i <= n; i++) {
            resul += i;
            }
            for (i =u; i >= 0; i--)
            {
                val=(n/resul)*aux;
                n=n-1;
                printf("el resultado es:%.2f",val);
            }
            break;
    case 4:
            printf("salir");
            break;
    default:
            printf("eleccion erronea vuelva a elegir");
        break;
    }
    
    system("pause");
    return 0;
}
