#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

/*
3) Escreva um programa em linguagem C que solicite ao usu�rio um n�mero inteiro N (entre 5 e 20). 
Em seguida, utilize um la�o for para imprimir os n�meros de 0 at� N e de N at� 0 simultaneamente.
*/
int main() {
  setlocale(LC_ALL, "Portuguese");

	short int num, i, j;
	do{
		printf("Informe um n�mero inteiro (Entre 5 e 20): ");
		scanf("%d", &num);
	} while(num < 5 || num > 20);
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	
	for(i = 0, j = num; i <= num, j >= 0; i++, j--) {
		printf("%d | %d\n", i, j);
	}





  return 0;
}


