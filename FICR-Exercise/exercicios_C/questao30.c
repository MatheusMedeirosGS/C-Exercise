/*Questão 30. Escreva um algoritmo que leia a idade de 10 pessoas, calcule e mostre a quantidade
de pessoas maiores de idade.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n, i, maiorDeIdade;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 10; i++){
        printf("Digite a idade: ");
        scanf("%d", &n);

        if(n >= 18){
            maiorDeIdade += 1;
        } 
    }
    printf("Quantidade de pessoas maiores de idade: %d", maiorDeIdade);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}