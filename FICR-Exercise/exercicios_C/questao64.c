/*Questão 64. Dada uma matriz B, determine a linha de B que possui a maior soma de seus
elementos.*/

#include <stdio.h>
#include <locale.h>
#define LINHA 2
#define COLUNA 2

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matrizB[LINHA][COLUNA] = {
        {1, 10},
        {3, 4}};
    int i, j, maiorSoma, linhaComMaiorValor, soma;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < LINHA; i++)
    {
        soma = 0;
        printf("|");
        for (j = 0; j < COLUNA; j++)
        {
            printf("%3d ", matrizB[i][j]);
            soma += matrizB[i][j];
        }
        printf("|\n");
        if(i == 0){
            maiorSoma = soma;
            linhaComMaiorValor = i;
        } else if(maiorSoma < soma){
            maiorSoma = soma;
            linhaComMaiorValor = i;
        }
    }
    
    printf("\nA linha com maior valor é: %d", linhaComMaiorValor + 1);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}