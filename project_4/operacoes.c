#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define text "Insira o valor para efectuar os calculos."

int main() {
	printf("%s\n", text);
	
	int dado = 10;
	
	scanf("%d", &dado);
	
	printf("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("Depois do incremento: %d.\n", dado);
	
	dado--;
	printf("Depois do decremento: %d.\n", dado);
	
	dado += 3;
	printf("Depois do incremento em 3 unidade: %d.\n", dado);
	
	dado -= 2;
	printf("Depois do decremento em 2 unidade: %d.\n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10: %d.\n", dado);
	
}

