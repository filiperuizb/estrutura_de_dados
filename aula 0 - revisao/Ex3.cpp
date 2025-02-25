#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

/*
3) Escreva um programa em linguagem C que solicite ao usuário um número inteiro N (entre 5 e 20). 
Em seguida, utilize um laço for para imprimir os números de 0 até N e de N até 0 simultaneamente.
*/
int main() {
  setlocale(LC_ALL, "Portuguese");

	short int num, i, j;
	do{
		printf("Informe um número inteiro (Entre 5 e 20): ");
		scanf("%d", &num);
	} while(num < 5 || num > 20);
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	
	for(i = 0, j = num; i <= num, j >= 0; i++, j--) {
		printf("%d | %d\n", i, j);
	}





  return 0;
}


