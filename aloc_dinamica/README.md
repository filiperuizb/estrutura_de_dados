# Exercício: Vetor Dinâmico com Alocação de Memória em C

## 🧠 Sobre Alocação Dinâmica

A **alocação dinâmica de memória** em C permite criar estruturas de dados cujo tamanho pode ser definido em tempo de execução. Utilizamos funções como `malloc`, `realloc` e `free` (da biblioteca `<stdlib.h>`) para controlar a memória manualmente.

Exemplo básico:
```c
int *vetor;
vetor = malloc(10 * sizeof(int)); // Aloca espaço para 10 inteiros
```

---

## 💻 Descrição do Exercício

Este programa em C demonstra o uso de alocação dinâmica, geração de números aleatórios **sem repetição** e manipulação de ponteiros. Ele trabalha com um vetor de inteiros que sofre expansão e redução durante a execução.

O objetivo é praticar:

- Manipulação de vetores e ponteiros
- Uso de `malloc`, `realloc` e `free`
- Impressão de **endereços de memória**
- Geração de valores **aleatórios e únicos**

---

## ⚙️ Funcionalidades do Programa

### 1. Criação do Vetor Dinâmico
- Criação de um vetor com 10 posições usando `malloc`.
- Preenchido com **valores únicos** entre **10 e 100**.
- Impressão do **endereço base** do vetor.

### 2. Exibição dos Elementos
- Procedimento `imprime()` mostra:
  - Índice do elemento
  - Valor armazenado
  - Endereço de memória

### 3. Expansão do Vetor
- Vetor é redimensionado para 15 posições com `realloc`.
- Novos elementos (da posição 10 a 14) recebem valores únicos de **100 a 199**.
- Impressão completa dos valores e endereços atualizados.

### 4. Redução do Vetor
- Vetor é reduzido para 8 posições com outro `realloc`.
- Impressão novamente dos elementos e seus endereços.

### 5. Liberação de Memória
- Memória alocada dinamicamente é liberada com `free`.

---

## 🤩 Funções do Código

| Função        | Objetivo |
|---------------|----------|
| `insereNum1`  | Preenche vetor com 10 números únicos entre 10 e 100 |
| `insereNum2`  | Adiciona 5 números únicos entre 100 e 199 |
| `imprime`     | Exibe índice, valor e endereço de cada elemento |
| `main`        | Executa as etapas em sequência: criação, expansão, redução e liberação de memória |

---

## 🧪 Exemplo de Saída

```
EX1 e 2
ENDERECO DE MEMORIA: 0x56199ee8e260
1 - 84 | 0x56199ee8e260
2 - 33 | 0x56199ee8e264
...

EX3
11 - 123 | 0x56199ee8e288
12 - 157 | 0x56199ee8e28c
...

EX - 4
1 - 84 | 0x56199ee8e260
...
8 - 43 | 0x56199ee8e27c
```

---

## 🧺 Boas Práticas Demonstradas

- Uso correto de `malloc`, `realloc` e `free`
- Prevenção de números repetidos usando laço de verificação
- Impressão de ponteiros (endereços) com `%p`
- Modularização com funções

---

## 🚀 Aprendizados

Este exercício reforça conceitos fundamentais para trabalhar com **estruturas de dados**, como listas dinâmicas, além de praticar geração de dados aleatórios e controle de memória. É uma base essencial para aplicações mais avançadas em C.

