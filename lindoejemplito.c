#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define valor 100 
int main(int argc, char *argv[]) {
	int total,totalp,op;
	bool continuar=true;
	char r;
	total=0;
	totalp=0;
	while (continuar==true) {
				printf("Desea Comprar Helado? S/N \n");
				scanf(" %c", &r);
				
				if (r == 'n' || r == 'N') {
					printf("fin del programa");
					continuar = false;
				} else {
					do {
						printf("Elija las opciones\n");
						printf("1-El helado sin adicional cuesta $100\n 2-El adicional de oreo cuesta $10\n 3-El adicional de chips de chocolate cuesta $15\n 4-El adicional de brownie cuesta $20 5-El adicional de obleas cuesta $12.\n");
						scanf("%d", &op);
						switch (op) {
						case 1:
							if (op == 1) {
								printf("usted compro el helado sin adicionales\n");
								totalp = valor;
								total = total + totalp;
							}
							break;
						case 2:
							if (op == 2) {
								printf("usted eligio con extra de oreo\n");
								totalp = valor + 10;
								total = total + totalp;
							}
							break;
						case 3:
							if (op == 3) {
								printf("usted eligio helado con extra de chip\n");
								totalp = valor + 15;
								total = total + totalp;
							}
							break;
						case 4:
							if (op == 4) {
								printf("usted eligio helado con extra de brownie\n");
								totalp = valor + 20;
								total = total + totalp;
							}
							break;
						case 5:
							if (op == 5) {
								printf("usted eligio helado con extra de obleas\n");
								totalp = valor + 12;
								total = total + totalp;
							}
							break;
						default:
							printf("error en la eleccion");
							break;
						};
						printf("Desea Comprar Helado? S/N \n");
						scanf(" %c", &r);
					} while (r == 's' || r == 'S');
					printf("el monto final a pagar es de %d\n", total);
					continuar = false;
				}
			}
			
			system("pause");
			return 0;
		}
		

