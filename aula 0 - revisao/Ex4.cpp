#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/*
4) Desenvolva um programa em linguagem C que solicite ao usu�rio um n�mero inteiro N (entre 10 e 50). 
Em seguida, utilize um la�o for para percorrer os n�meros, onde:
A primeira vari�vel (i) deve ser incrementada de 1 em 1.
A segunda vari�vel (j) deve ser incrementada de 5 em 5.
O la�o deve continuar enquanto i for menor ou igual a N e j for menor ou igual a 2 * N.
Ao final, o programa deve exibir o tamanho em bytes das vari�veis utilizadas usando sizeof().
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

	short int num, i, j;
	do{
		printf("Informe um n�mero inteiro (Entre 10 e 50): ");
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


