/*Questão 61. Seja A uma matriz de ordem M. Fazer um programa para:
a) Determinar a soma dos elementos da diagonal principal de A.
b) Colocar os elementos da diagonal principal de A em um vetor D.*/

#include <stdio.h>
#include <locale.h>
#define ORDEM 2

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int matrizA[ORDEM][ORDEM] = {
        {1, 2},
        {3, 4}
    }, vetorD[ORDEM];
    int i, j, soma = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < ORDEM; i++){
        printf("| ");
        for(j = 0; j < ORDEM; j++){
            printf("%3d ", matrizA[i][j]);
            if(i == j){
                soma += matrizA[i][j];
                vetorD[i] = matrizA[i][j];
            }
        }
        printf("|\n");
    }

    printf("\nA diagonal principal é: ");
    printf("[ ");
    for(i = 0; i < ORDEM; i++){
        printf("%d ", vetorD[i]);
    }
    printf("]");
    printf("\nE sua soma é %d", soma);
    
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}