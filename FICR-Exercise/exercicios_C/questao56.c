/*Questão 56. Dados dois vetores A e B com 10 elementos cada, armazenar no vetor C a soma
do elemento em A com o elemento em B em cada uma das posições.*/

#include <stdio.h>
#include <locale.h>
#define TAMANHO_DO_VETOR 10


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float vetorA[TAMANHO_DO_VETOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, vetorB[TAMANHO_DO_VETOR] = {10, 9, 8 , 7, 6, 5, 4, 3, 2, 1}, vetorC[TAMANHO_DO_VETOR];
    int i;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < TAMANHO_DO_VETOR; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for(i = 0; i < TAMANHO_DO_VETOR; i++){
        printf("%.2f ", vetorC[i]);
    }

    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}