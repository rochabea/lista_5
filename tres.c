/*Questão 3 - Desenvolva um algoritmo em C, que leia quatro números inteiros e possua macros que calcule a média dos
números*/
#include <stdio.h>
#include <stdlib.h>
#define MEDIA(p1,p2,p3,p4)((p1+p2+p3+p4)/4)
int main(){
    float n1, n2, n3, n4, valor;
    printf("Iremos calcular a media de quatro numeros.");
    printf("\nInsira o primeiro valor: ");
    scanf("%f", &n1);
    printf("\nInsira o segundo valor: ");
    scanf("%f", &n2);
    printf("\nInsira o terceiro valor: ");
    scanf("%f", &n3);
    printf("\nInsira o quarto valor: ");
    scanf("%f", &n4);

    valor = MEDIA(n1,n2,n3,n4);

    printf("\nO valor da media e de %.2f", valor);
}