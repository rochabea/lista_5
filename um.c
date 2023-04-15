/* Desenvolva um algoritmo em C, que leia dois números inteiros e possua macros que realize as seguintes
operações matemáticas: Somar, Subtrair, Dividir e Multiplicar*/
#include <stdio.h>
#include <stdlib.h>
#define SOMAR(p1, p2)(p1+p2)
#define SUBTRAIR(p1,p2)(p1-p2)
#define MULTIPLICAR(p1,p2)(p1*p2)
#define DIVIDIR(p1,p2)(p1/p2)

int main(void){
    int um, dois, soma, multiplicacao, subtracao, divisao;
    printf("Informe dois valores para que a operacao seja feita: ");
    scanf("%d \n %d", &um, &dois);
    soma = SOMAR(um, dois);
    multiplicacao = MULTIPLICAR(um,dois);
    subtracao = SUBTRAIR(um,dois);
    divisao = DIVIDIR(um,dois);
    printf("\nResultado da operacao de soma: %d", soma);
    printf("\nResultado da operacao de subtracao: %d", subtracao);
    printf("\nResultado da operacao de multiplicacao: %d", multiplicacao);
    printf("\nResultado da operacao de divisao: %d", divisao);
}