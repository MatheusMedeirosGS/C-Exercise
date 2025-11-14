/*Questao 39: Escreva um algoritmo que calcule e mostre os 10 primeiros termos da serie de
Fibonacci:
1 1 2 3 5 8 13 21 34 55 89 144 233 377 ...*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int i, j = 0, k = 1, fibonacci = 1;

    for(i = 0; i < 10; i++){
        printf("%d� termo é: %d\n", i + 1, fibonacci);
        fibonacci = j + k;
        j = k;
        k = fibonacci;
    }
    
    return 0;
}