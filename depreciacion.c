#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float val, aux, resultado;
	int i, deprec, anual, eleccion, n, anio, u, resul, p;
	anio = 1;
	printf("--BIENVENIDO AL PROGRAMA DE DEPRECIACION--\n");
	printf("INGRESE EL VALOR DEL OBJETO: ");
	scanf("%f", &aux);
	printf("INGRESE EL NUMERO DE ANIOS POR LOS QUE SE DEPRECIARA EL OBJETO: ");
	scanf("%d", &n);
	u = n;
	printf("ELIJA UNA ENTRE LAS SIGUIENTES OPCIONES:\n");
	printf("1-METODO LINEA RECTA\n");
	printf("2-METODO BALANCE DOBLEMENTE DECLINANTE\n");
	printf("3-METODO SUMA DE LOS DIGITOS\n");
	printf("4-SALIR\n");
	scanf("%d", &eleccion);
	switch (eleccion)
	{
	case 1:
		printf("Usted eligió el método de línea recta\n");
		resultado = aux / n;
		val = resultado;
		printf("La depreciación es de %f\n", val);
		break;
	case 2:
		printf("Usted eligió el método de balance doblemente declinante\n");
		for (i = 1; i <= n; i++)
		{
			resultado = 2.0 / n * aux;
			val = aux - resultado;
			anio = anio + 1;
			printf("En el año %d la depreciación es de %f\n", anio, val);
			aux = val;
		}
		break;
	case 3:
		printf("Usted eligió el método de suma de los dígitos\n");
		resul = 0;
		for (i = 1; i <= n; i++) {
			resul += i;
		}
		for (i = n; i >= 0; i--) //i=10 resul=55
		{
			if (resul == 0) {
				printf("Error: división por cero\n"); 
				break;
			}
			val = (i * aux) / resul;
			printf("En el año %d la depreciación es de %.2f\n", anio, val);
			anio++;
			aux -= val; 
		}
		break;
	case 4:
		printf("Salir\n");
		break;
	default:
		printf("Eleccion erronea, vuelva a ingresar");
		break;
	}
	
	system("pause");
	return 0;
}
