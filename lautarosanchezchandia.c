#include <stdio.h>

int main() {
	double nota1, nota2, nota3, ponderacion1 = 0.25, ponderacion2 = 0.30, ponderacion3 = 0.45, nota_final;
	
	do {
		printf("Ingrese la primera nota parcial (entre 0 y 10): ");
		scanf("%lf", &nota1);
		if (nota1 < 0 || nota1 > 10) {
			printf("Nota incorrecta. El programa ha finalizado.\n");
			return 0;
		}
		
		printf("Ingrese la segunda nota parcial (entre 0 y 10): ");
		scanf("%lf", &nota2);
		if (nota2 < 0 || nota2 > 10) {
			printf("Nota incorrecta. El programa ha finalizado.\n");
			return 0;
		}
		
		printf("Ingrese la tercera nota parcial (entre 0 y 10): ");
		scanf("%lf", &nota3);
		if (nota3 < 0 || nota3 > 10) {
			printf("Nota incorrecta. El programa ha finalizado.\n");
			return 0;
		}
		
		nota_final = (nota1 * ponderacion1) + (nota2 * ponderacion2) + (nota3 * ponderacion3);
		
		printf("\nNotas parciales: %.2lf, %.2lf, %.2lf\n", nota1, nota2, nota3);
		printf("Ponderaciones: %.2lf, %.2lf, %.2lf\n", ponderacion1, ponderacion2, ponderacion3);
		printf("Nota final: %.2lf\n", nota_final);
		
		if (nota_final >= 6) {
			printf("Materia aprobada.\n");
		} else {
			printf("Materia desaprobada.\n");
		}
		
		printf("\n");
		
	} while (1);
	
	return 0;
}
