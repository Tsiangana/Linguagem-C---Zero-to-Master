#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int d;
	
	printf("Insira um valor de 1 a 7:\n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda.\n");
			break;
		case 3:
			printf("Terça.\n");
			break;
		case 4:
			printf("Quarta.\n");
			break;
		case 5:
			printf("Quinta.\n");
			break;
		case 6:
			printf("Sexta.\n");
			break;
		case 7:
			printf("Sabado.\n");
			break;
		default:
			printf("Valor inválido.\n");
			break;
	}
}
