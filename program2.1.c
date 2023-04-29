#include <stdio.h>
int main()
{
    int a,d;
    float q,m ;
    printf("ingrese un valor entero por pantalla");
    scanf("%d",&a);
    q= a/5;
    m=a/2;
    d=a*a;
    printf ("la quinta parte es %f\n",q);
    printf("la mitad es %f\n",m);
    printf("el numero elevado es %d\n",d);
    return 0;
}
