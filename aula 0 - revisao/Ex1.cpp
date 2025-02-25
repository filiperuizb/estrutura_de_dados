#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

/*1) Um grupo de amigos resolve fazer uma ação beneficente para arrecadar dinheiro com intuito de ajudar o João 
que teve seu PC avariado em uma enchente, bem como muitos outros eletrônicos.
Serão aceitas doações de no máximo 100 pessoas ou até que o valor total 
arrecadado seja igual ou superior a R$ 7.500,00.

Apresentando no final, a média de valor doado por pessoa.*/

int main() {
  setlocale(LC_ALL, "Portuguese");
	
	float doacao, doacaoFinal = 0;
	short int i;
	
	for(i = 0; i <= 100 && doacaoFinal <= 7500; i++) {
		printf("Escreva o valor da %d° doação: ", i+1);
		scanf("%f", &doacao);
		doacaoFinal+= doacao;
	}
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("A média de doação por pessoa foi de: %.2f", doacaoFinal/i);





  return 0;
}


