#include <stdio.h>


int main(){
	int A, B, soma, subtr, mult, div;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	div = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtracao: %d.\n", subtr);
	printf("Multiplicacao: %d.\n", mult);
	printf("Divisao: %d.\n", div);
}
