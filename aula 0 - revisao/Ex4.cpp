#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/*
4) Desenvolva um programa em linguagem C que solicite ao usuário um número inteiro N (entre 10 e 50). 
Em seguida, utilize um laço for para percorrer os números, onde:
A primeira variável (i) deve ser incrementada de 1 em 1.
A segunda variável (j) deve ser incrementada de 5 em 5.
O laço deve continuar enquanto i for menor ou igual a N e j for menor ou igual a 2 * N.
Ao final, o programa deve exibir o tamanho em bytes das variáveis utilizadas usando sizeof().
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

	short int num, i, j;
	do{
		printf("Informe um número inteiro (Entre 10 e 50): ");
		scanf("%d", &num);
	} while(num < 10 || num > 50);

	for(i = 0, j = 0; i <= num && j <= 2*num; i++, j+=5) {
		printf("%d | %d \n", i, j);
	} 

	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("%d bytes\n", sizeof(num));
	printf("%d bytes\n", sizeof(i));
	printf("%d bytes\n", sizeof(j));
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	
  return 0;
}


