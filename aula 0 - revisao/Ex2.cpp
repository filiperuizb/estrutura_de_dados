#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

/*
2) Elabore um programa em linguagem C que exiba os números de 1 a 10 em ordem crescente e, simultaneamente, os números de 20 a 11 em ordem decrescente.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	
	for(i = 1, j = 20; i >= 10, j >= 11; i++, j--) {
		printf("%d | %d\n", i, j);
	}



  return 0;
}


