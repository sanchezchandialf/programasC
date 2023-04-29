#include <stdio.h>
#include <stdlib.h>
int main() {
    int Num,Num2; int Res;
    printf("Programa para determinar naturaleza par o impar de un numero de un numero ingresado por pantalla\n\n");
    printf ("Introduzca un numero entero: ");
    scanf ("%d", &Num);
    printf("Introduzca un numero entero:");
    scanf ("%d", &Num2);
    if (Num>=Num2)
    {
        Res = Num%2;
        if (Res==0) {
        printf ("El numero es par\n");
        } else {
        printf ("El numero es impar\n");
        }
    }else
    {
        printf("no se puede realizar la operacion");
    }
    system("pause");
    return 0;
}