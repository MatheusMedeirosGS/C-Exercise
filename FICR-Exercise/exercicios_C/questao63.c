/*Questão 63. Suponha N = M . Determine a matriz T transposta de A. (obs.: T[l][c] = A [c][l]).
*/

#include <stdio.h>
#include <locale.h>
#define LINHA 2
#define COLUNA 2

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int matrizA[LINHA][COLUNA] = {
        {1, 2},
        {3, 4}
    }, matrizT[COLUNA][LINHA];
    int i, j;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < LINHA; i++){
        printf("|");
        for(j = 0; j < COLUNA; j++){
            printf("%3d ", matrizA[i][j]);
            matrizT[j][i] = matrizA[i][j];
        }
        printf("|\n");
    }
    printf("\n");
    for(i = 0; i < COLUNA; i++){
        printf("|");
        for(j = 0; j < LINHA; j++){
            printf("%3d ", matrizT[i][j]);
        }
        printf("|\n");
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}