/*Questão 40. Escreva um algoritmo que leia os valores de K e N . Calcule e mostre o valor de
K^N.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float K, N;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Escreva o valor da base: ");
    scanf("%f", &K);
    printf("Escreva o valor da potência: ");
    scanf("%f", &N);

    printf("O valor da expoenciação é: %.2f", pow(K, N));
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}