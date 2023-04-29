#include <stdio.h>
#include <stdlib.h>
int main()
{
    char mi_array[5] = {'a', 'e', 'i','o','u'};
    char letra;
    int i, es_vocal;
    printf("ingrese una letra");
    scanf(" %c", &letra);
    for ( i = 0; i < 5; i++)
    {
        if (letra ==mi_array[i]){
            printf("su letra es una vocal");
            break;

        }else
        {
        printf("su letra es una consonante\n");
        break;
        }
    }
    system("pause");
    return 0;
}
