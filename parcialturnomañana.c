#include <stdio.h>
#include <math.h>

int main() {
	float cantidad;
	int centavos, monedas50 = 0, monedas10 = 0, monedas5 = 0, monedas1 = 0;
	
	printf("Ingrese la cantidad a devolver en pesos: ");
	scanf("%f", &cantidad);
	
	// Convertir la cantidad a centavos
	centavos = (int)(round(cantidad * 100));
	
	// Calcular la cantidad de monedas de cada tipo necesarias
	while (centavos > 0) {
		if (centavos >= 50) {
			monedas50++;
			centavos -= 50;
		} else if (centavos >= 10) {
			monedas10++;
			centavos -= 10;
		} else if (centavos >= 5) {
			monedas5++;
			centavos -= 5;
		} else {
			monedas1++;
			centavos -= 1;
		}
	}
	
	// Imprimir la cantidad de monedas necesarias
	printf("Se deben devolver %d monedas de 50 centavos, %d monedas de 10 centavos, %d monedas de 5 centavos y %d monedas de 1 centavo.\n", monedas50, monedas10, monedas5, monedas1);
	
	return 0;
}
