#include <stdio.h>
int main()
{
    int a,b;
    printf("ingrese dos numeros enteros");
    scanf("%d",&a);
    scanf("%d",&b);
    printf ("los numeros originales son a:%d \n",a,"b:%d \n",b);
    a=b;
    b=a;
    printf("a ahora es:%d",a,"b ahora es:",b);

    return 0;
}
