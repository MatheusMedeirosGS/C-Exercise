/*Questão 45. Construa um algoritmo que apresente a tabuada de um número N. O valor de N
será fornecido pelo usuário.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, i, produto;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um número para a tabuada: ");
    scanf("%d", &N);
    printf("\n");
    
    for(i = 0; i <= 10; i++){
        produto = N * i;
        printf("%d x %d = %d\n", N, i, produto);
    }
    
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}