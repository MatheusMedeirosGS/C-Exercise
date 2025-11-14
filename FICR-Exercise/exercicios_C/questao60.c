/*Questão 60. Seja R uma matriz 4x5. Determine o maior elemento de R e a sua posição.*/

#include <stdio.h>
#include <locale.h>
#define LINHAS 4
#define COLUNAS 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int matrizR[LINHAS][COLUNAS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 20, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    int i, j, maiorValor;

    maiorValor = matrizR[0][0];

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("%3d ", matrizR[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            if(maiorValor <= matrizR[i][j]){
                maiorValor = matrizR[i][j];
            }
        }
    }

    printf("\nO maior valor é %d e está na(s) posição(ões):\n", maiorValor);
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            if(maiorValor == matrizR[i][j]){
                printf("[%d][%d] ", i + 1, j + 1);
            }
        }
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}