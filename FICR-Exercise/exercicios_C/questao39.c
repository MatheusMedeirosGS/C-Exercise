/*Questão 39. Escreva um algoritmo que calcule e mostre os 10 primeiros termos da série de
Fibonacci:
1 1 2 3 5 8 13 21 34 55 89 144 233 377 ...*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i, j = 0, k = 1, fibonacci = 1;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 10; i++){
        printf("%d° termo é: %d\n", i + 1, fibonacci);
        fibonacci = j + k;
        j = k;
        k = fibonacci;
    }
    printf("-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}