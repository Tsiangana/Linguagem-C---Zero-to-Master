#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int idade = 0;
	float peso = 0.0;
	
	/*printf("Valor inicial da idade: %d.\n", idade);*/
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Digite um peso:\n");
	scanf("%f", &peso);
	
	printf("idade informada: %d.\n", idade);
	printf("O peso informado: %f.\n", peso);
	
}
