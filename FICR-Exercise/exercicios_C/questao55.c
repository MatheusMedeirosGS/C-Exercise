/*Questão 55. Multiplicar os elementos que estão nas posições ímpares do vetor pela constante 5.*/

#include <stdio.h>
#include <locale.h>
#define TAMANHO_DO_VETOR 10


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float vetor[TAMANHO_DO_VETOR];
    int i;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 1; i <= TAMANHO_DO_VETOR; i += 2){
        printf("Digite o valor da posição %d: ", i);
        scanf("%f", &vetor[i - 1]);

        printf("%.2f x 5 = %.2f\n\n", vetor[i - 1], vetor[i - 1] * 5 );
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}