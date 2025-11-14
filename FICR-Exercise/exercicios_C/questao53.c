/*Questão 53. Calcular a média dos elementos de um vetor de 10 posições.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float vetorSoma[10], soma = 0.0;
    int i;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 10; i++){
        printf("Digite o número da posição %d: ", i + 1);
        scanf("%f", &vetorSoma[i]);

        soma += vetorSoma[i];
    }

    float tamanho = (float)sizeof(vetorSoma)/sizeof(vetorSoma[0]);

    printf("O valor da média é: %.2f", soma/tamanho);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}