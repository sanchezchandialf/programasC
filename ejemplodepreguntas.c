#include <stdio.h>
int main(int argc, char *argv[]) {
	int suma,num;
	char r;
	suma=0;
	do{
		printf("desea introducir un numero\n");
		scanf("%c",&r);
		if(r=='n' || 'N'){
			printf("gracias por utilizar el programa");
			break;
		}
		do{
		printf("desea introducir un numero\n");
		scanf("%c",&r);
		printf("introduzca un numero entero\n");
		scanf("%d",&num);
		suma=suma+num;
		printf("desea introducir un numero\n");
		scanf("%c",&r);
		} while(r=='s' || r=='S');
			printf("la suma de todos los numeros es: %d",suma);
	} while(r!='n' || r!='N');
	return 0;
}

