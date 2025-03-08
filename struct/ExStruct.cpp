#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

// Definição da struct Endereco
typedef struct {
    char logradouro[50];
    char numero[5];
    char cidade[30];
    char bairro[50];
    char estado[3];
    char cep[10];
} ENDERECO;

//------------------------------------------------
// Definição da struct Pessoa, que inclui um Endereco
typedef struct {
    char nome[50];
    char cpf[15];
    char rg[15];
    char fone[20];
    char sexo;
    int idade;
    ENDERECO endereco;
} PESSOA;

//------------------------------------------------
PESSOA cliente[5];
short int i, j;


void tirarCursor();
void setColor(int color);
void ordenar();
void registrar();
void listar();

//------------------------------------------------
int main() {
    setlocale(LC_ALL, "Portuguese");
    registrar();
    listar();
    
    system("pause");
    return 0;
}
//------------------------------------------------

void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

	/*
CORES:
0	Preto
1	Azul
2	Verde
3	Azul claro
4	Vermelho
5	Roxo
6	Amarelo
7	Branco claro
8	Cinza
9	Azul claro
10	Verde claro
11	Azul piscina
12	Vermelho claro
13	Rosa
14	Amarelo claro
15	Branco
*/
}

void ordenar() {
    PESSOA tmp;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(cliente[i].nome, cliente[j].nome) > 0) {
                tmp = cliente[i];
                cliente[i] = cliente[j];
                cliente[j] = tmp;
            }
        }
    }
}

void registrar() {
  for (i = 0; i < 5; i++) {
    system("cls");
    setColor(14);
    printf("Registre a %d° pessoa: \n", i + 1);
    setColor(9);
    printf("Nome: ");
    setColor(15);
    fgets(cliente[i].nome, 50, stdin);
    setColor(9);
    printf("\nCpf: ");
    setColor(15);
    fgets(cliente[i].cpf, 15, stdin);
    setColor(9);
    printf("\nRg: ");
    setColor(15);
    fgets(cliente[i].rg, 15, stdin);
    setColor(9);
    printf("\nFone: ");
    setColor(15);
    fgets(cliente[i].fone, 20, stdin);
    fflush(stdin);
    
    do {
      setColor(9);
      printf("\nSexo (F/M): ");
      setColor(15);
      scanf(" %c", &cliente[i].sexo);
      fflush(stdin);
    } while (cliente[i].sexo != 'F' && cliente[i].sexo != 'f' && cliente[i].sexo != 'M' && cliente[i].sexo != 'm');
    
    setColor(9);
    printf("\nIdade: ");
    setColor(15);
    scanf("%d", &cliente[i].idade);
    fflush(stdin);
    setColor(9);
    printf("\nLogradouro: ");
    setColor(15);
    fgets(cliente[i].endereco.logradouro, 50, stdin);
    setColor(9);
    printf("\nBairro: ");
    setColor(15);
    fgets(cliente[i].endereco.bairro, 50, stdin);
    setColor(9);
    printf("\nNumero: ");
    setColor(15);
    fgets(cliente[i].endereco.numero, 5, stdin);
    setColor(9);
    printf("\nCidade: ");
    setColor(15);
    fgets(cliente[i].endereco.cidade, 30, stdin);
    setColor(9);
    printf("\nEstado: ");
    setColor(15);
    fgets(cliente[i].endereco.estado, 3, stdin);
    setColor(9);
    printf("\nCep: ");
    setColor(15);
    fgets(cliente[i].endereco.cep, 10, stdin);
    setColor(2);
    printf("%d° pessoa registrada \n", i + 1);
  }
  ordenar();
}


void listar() {
  for (i = 0; i < 5; i++) {
    system("cls");
    setColor(9);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    setColor(12);
    printf("%d° Pessoa:\n", i + 1);
    setColor(9);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    setColor(12);
    printf("Nome: %s", cliente[i].nome);
    setColor(9);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    setColor(12);
    printf("Cpf: %s", cliente[i].cpf);
    setColor(9);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    setColor(12);
    printf("Fone: %s", cliente[i].fone);
    setColor(9);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    setColor(12);
    printf("Cidade: %s", cliente[i].endereco.cidade);
    setColor(9);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    setColor(12);
    printf("Estado: %s", cliente[i].endereco.estado);
    setColor(9);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    setColor(2);
    printf("Para continuar aperte ENTER\n");
    
    scanf("%c");
    fflush(stdin);
  }

  system("cls");
  for (i = 0; i < 5; i++) {
    setColor(14);
    printf("QNT BYTES: %d ", sizeof(cliente[i]));
    printf("\n");
  }
}

