#include <stdio.h>
#include <math.h>

int main() {
	float masa, talla, imc; // Declaramos las variables de tipo float que vamos a utilizar
	int intentos = 0; // Inicializamos la variable intentos en 0
	printf("programa que calcula y valora el indice de masa corporal\n");
	printf("-----------------------------------------------------------\n");
	printf("Captura de datos\n");
	printf("------------------\n");
	while (intentos < 3) { // Creamos un bucle while que se repetirá mientras la variable intentos sea menor o igual a 3
		printf("Digite la masa en kg: ");// Pedimos al usuario que ingrese la masa en kg
		scanf("%f", &masa);//leemos con un scanf lo que el usuario ingreso
		printf("Ingrese la talla en m: ");//solicitamos que ingrese el talle 
		scanf("%f", &talla);//leemos con un scanf lo que el usuario ingreso
		if (masa > 0 && talla > 0) {// Comprobamos que la masa y la talla ingresadas sean mayores que 0
			imc = masa / pow(talla, 2);
			/*Apartir de aca comienzo a comparar el IMC que el usuario ingreso con los parametros de la organizacion mundial de la salud"*/
			if (imc < 18.5) {
				printf("                imprimir datos y resultados               \n");
				printf("-----------------------------------------------------------\n");
				printf("Masa del paciente en kg: %.2f\n",masa);
				printf("talla del paciente en metros %.2f:\n",talla);
				printf("Indice de Masa Corporal en kg/m2: %.4f\n", imc);
				printf(" Valoracion del indice IMC: Insuficiencia ponderal\n");
				printf("-----------------------------------------------------------\n");
			} else if (imc >= 18.5 && imc <= 24.9) {
				printf("                imprimir datos y resultados               \n");
				printf("-----------------------------------------------------------\n");
				printf("Masa del paciente en kg: %.2f\n",masa);
				printf("talla del paciente en metros %.2f\n",talla);
				printf("Indice de Masa Corporal en kg/m2: %.4f\n", imc);
				printf(" Valoracion del indice IMC: Intervalo normal\n");
				printf("-----------------------------------------------------------\n");
			} else if (imc >= 25.0 && imc <= 29.9) {
				printf("                imprimir datos y resultados               \n");
				printf("-----------------------------------------------------------\n");
				printf("Masa del paciente en kg: %.2f\n",masa);
				printf("talla del paciente en metros %.2f\n",talla);
				printf("Indice de Masa Corporal en kg/m2: %.4f\n", imc);
				printf(" Valoracion del indice IMC: Preobesidad\n");
				printf("-----------------------------------------------------------\n");
			} else if (imc >= 30.0 && imc <= 34.9) {
				printf("                imprimir datos y resultados               \n");
				printf("-----------------------------------------------------------\n");
				printf("Masa del paciente en kg: %.2f\n",masa);
				printf("talla del paciente en metros %.2f",talla);
				printf("Indice de Masa Corporal en kg/m2: %.4f\n", imc);
				printf(" Valoracion del indice IMC: Obesidad Clase1\n");
				printf("-----------------------------------------------------------\n");
			} else if (imc >= 35.0 && imc <= 39.9) {
				printf("                imprimir datos y resultados               \n");
				printf("-----------------------------------------------------------\n");
				printf("Masa del paciente en kg: %.2f\n",masa);
				printf("talla del paciente en metros %.2f\n",talla);
				printf("Indice de Masa Corporal en kg/m2: %.4f\n", imc);
				printf(" Valoracion del indice IMC: ObesidadClase2\n");
				printf("-----------------------------------------------------------\n");
			} else {
				printf("                imprimir datos y resultados               \n");
				printf("-----------------------------------------------------------\n");
				printf("Masa del paciente en kg: %.2f\n",masa);
				printf("talla del paciente en metros %.2f\n",talla);
				printf("Indice de Masa Corporal en kg/m2: %.4f\n", imc);
				printf(" Valoracion del indice IMC: Obesidad Clase3\n");
				printf("-----------------------------------------------------------\n");
			}
			intentos++; //sumo cada intento 
		} else if(masa <0){
			printf("Los valores  de la masa de la persona ingresados son inválidos. Intente nuevamente.\n"); //mensaje por si ingresa valores invalidos 
			intentos++; //suma de intentos
		}else {
			
			printf("Los valores  de la talla  de la persona ingresados son inválidos. Intente nuevamente.\n"); //mensaje por si ingresa valores invalidos 
			intentos++; //suma de intentos
		}
	}
	
	if (intentos == 3) {
		printf("Se superó el número máximo de intentos permitidos. Por favor, intente más tarde.\n"); //mensaje final
	}
	
	return 0;
}
