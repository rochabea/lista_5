/*Elabore um programa em C, que leia nome e idade e possua macros que eixba mensagens “Maior de Idade”
e/ou menor de idade*/
#include <stdio.h>
#include <stdlib.h>
#define MAIOR printf("\nMaior de Idade")
#define MENOR printf("\nMenor de idade")
int main(){
    int idade;
    printf("Insira a sua idade: ");
    scanf("%d", &idade);
    if (idade > 18)
    {
        MAIOR;
    }else{
        MENOR;
    }
    
}