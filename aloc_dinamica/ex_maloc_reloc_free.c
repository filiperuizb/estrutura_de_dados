#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void insereNum1(int *v, int t);
void insereNum2(int *v, int t);
void imprime(int *v, int t);


int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int *vet;
	vet = malloc(10 * sizeof(int));
	printf("PRIMEIRA PARTE (VETOR DE 10 ELEMENTOS)\n");
	printf("ENDEREÇO DE MEMÓRIA: %p\n", vet);
	insereNum1(vet, 10);
	imprime(vet, 10);
	
	printf("\n\nREALOCAÇÃO PARA 15 ELEMENTOS\n");
	vet = realloc(vet, 15 * sizeof(int));
	insereNum2(vet, 15); 	
	printf("\n");
	imprime(vet, 15);
	
	printf("\n\nFAZENDO A REALOCAÇÃO PARA 8 ELEMENTOS\n");
	vet = realloc(vet, 8 * sizeof(int));
	printf("\n");
	imprime(vet, 8);
	
	free(vet);
}
void insereNum1(int *v, int t) {
    int y, x, k, num;
    for(y = 0; y < t; y++) {
        do {
            num = rand() % (100 - 10 + 1) + 10; 
            k = 0; 
            for(x = 0; x < y; x++) {  
                if(*(v + x) == num) {  
                    k = 1;  
                }
            }
        } while(k == 1); 
        *(v + y) = num;  
    }
}
void insereNum2(int *v, int t) {
	int y, x, k, num;
    for(y = 10; y < t; y++) {
        do {
            num = *(v+y) = rand() % (199 - 100 + 1) + 100;
            k = 0; 
            for(x = 0; x < y; x++) {  
                if(*(v + x) == num) {  
                    k = 1;  
                }
            }
        } while(k == 1); 
        *(v + y) = num;  
    }
}



void imprime(int *v, int t) {
	int i;
	for( i = 0; i < t; i++) {
		printf("%d - %d | %p\n", i+1, *(v+i), &*(v+i));
	}
}

