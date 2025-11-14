/*Questao 41: Escreva um programa que calcule as n primeiras potencias do numero k. Para n =
3 e k = 2 teremos:
? 2 elevado a 1 = 2
? 2 elevado a 2 = 4
? 2 elevado a 3 = 8*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int n, k = 2;

    for(n = 1; n <= 3; n++){
        printf("%d elevado a %d = %.2f\n", k, n, pow(k, n));
    }
    
    return 0;
}