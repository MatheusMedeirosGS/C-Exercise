/*Questão 58. Gerar e mostrar o vetor B obtido pela inversão da ordem do vetor A.*/

#include <stdio.h>
#include <locale.h>
#define TAMANHO_DO_VETOR 10


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int vetorA[TAMANHO_DO_VETOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, vetorB[TAMANHO_DO_VETOR];
    int i, j = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = TAMANHO_DO_VETOR - 1; i >= 0; i--, j++){
        vetorB[j] = vetorA[i];
    }

    for(i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("%d ", vetorB[i]);
    }

    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}