#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Aprovado(a)!\n");
	}
	
	if(m < 7.0){
		printf("Reprovado(a)!\n");
	}
	
}
