# Exercício: Cadastro de Pessoas em C com Struct

## O que é uma struct em C?

Uma `struct` (estrutura) em C é uma forma de agrupar várias variáveis de tipos diferentes sob um mesmo nome. Ela é muito utilizada para organizar dados relacionados, como informações de uma pessoa, um endereço ou um produto.

Exemplo básico de struct:
```c
struct Pessoa {
    char nome[50];
    int idade;
};
```
Isso cria um novo tipo de dado chamado `Pessoa`, que contém um nome (string de 50 caracteres) e uma idade (inteiro).

---

## Descrição do Exercício

Este programa em C faz o cadastro de 5 pessoas, solicitando informações como nome, CPF, telefone e endereço. Os dados são armazenados em structs e, ao final, exibidos na tela de forma ordenada pelo nome.

### Estruturas Utilizadas

O exercício foi feito pra nos acostumarmos com estruturas de struct aninhadas uma na outra
Por exemplo para acessar o logradouro basta após chamar o primeiro struct pessoa chamar o struct endereço, no caso do exercício
- cliente[i].endereco.logradouro;

1. **ENDERECO**: Contém informações de localização.
   ```c
   typedef struct {
       char logradouro[50];
       char numero[5];
       char cidade[30];
       char bairro[50];
       char estado[3];
       char cep[10];
   } ENDERECO;
   ```

2. **PESSOA**: Contém os dados pessoais e um campo do tipo `ENDERECO`.
   ```c
   typedef struct {
       char nome[50];
       char cpf[15];
       char rg[15];
       char fone[20];
       char sexo;
       int idade;
       ENDERECO endereco;
   } PESSOA;
   ```

---

## Funcionalidades do Programa

1. **Registrar Pessoas**: O usuário insere os dados de cada pessoa.
2. **Ordenar por Nome**: Antes da exibição, os dados são organizados alfabeticamente.
3. **Listar Pessoas**: Exibe os dados na tela de forma formatada.
4. **Alterar Cor do Texto**: Utiliza funções para modificar a cor de texto no Windows.

---


