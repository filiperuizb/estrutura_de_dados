#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

/*1) Um grupo de amigos resolve fazer uma a��o beneficente para arrecadar dinheiro com intuito de ajudar o Jo�o 
que teve seu PC avariado em uma enchente, bem como muitos outros eletr�nicos.
Ser�o aceitas doa��es de no m�ximo 100 pessoas ou at� que o valor total 
arrecadado seja igual ou superior a R$ 7.500,00.

Apresentando no final, a m�dia de valor doado por pessoa.*/

int main() {
  setlocale(LC_ALL, "Portuguese");
	
	float doacao, doacaoFinal = 0;
	short int i;
	
	for(i = 0; i <= 100 && doacaoFinal <= 7500; i++) {
		printf("Escreva o valor da %d� doa��o: ", i+1);
		scanf("%f", &doacao);
		doacaoFinal+= doacao;
	}
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("A m�dia de doa��o por pessoa foi de: %.2f", doacaoFinal/i);





  return 0;
}


