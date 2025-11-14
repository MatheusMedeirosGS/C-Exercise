/*Questão 62. Idem ao exercício anterior para diagonal secundária.
a) Determinar a soma dos elementos da diagonal secundária de A.
b) Colocar os elementos da diagonal secundária de A em um vetor D.*/

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
        printf("|");
        for(j = 0; j < ORDEM; j++){
            printf("%3d ", matrizA[i][j]);
        }
        printf("|\n");
    }

    for(i = 0, j = ORDEM - 1; i < ORDEM && j >= 0; i++, j--){
        vetorD[i] = matrizA[i][j];
        soma += matrizA[i][j];
    }

    printf("\nA diagonal secundária é: ");
    printf("[ ");
    for(i = 0; i < ORDEM; i++){
        printf("%d ", vetorD[i]);
    }
    printf("]");
    printf("\nE sua soma é %d", soma);
    
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}