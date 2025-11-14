/*Questao 45. Construa um algoritmo que apresente a tabuada de um numero N. O valor de N
sera fornecido pelo usuario.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int N, i, produto;

    printf("Digite um número para a tabuada: ");
    scanf("%d", &N);
    printf("\n");
    
    for(i = 0; i <= 10; i++){
        produto = N * i;
        printf("%d x %d = %d\n", N, i, produto);
    }
    

    return 0;
}