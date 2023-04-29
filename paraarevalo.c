#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	float top,kp,parcial,total;
	printf("ingrese el tope permitido para pescar");
	scanf("%f",&top);
	while (parcial<=top)
	{
		printf("ingrese el peso de su pez");
		scanf("%f",&kp);
		if (kp==0)
		{
			printf("error , programa finalizado \n");
			break;
		}
		
		parcial=parcial+kp;
		total=parcial;
		
	}
	printf("usted sobrepaso los limites,su pesaje final es %.2f\n",total-kp);
	printf("queda exento el ultimo pez de %.2f",kp,"kilos");
	system("pause");
	return 0;
}
