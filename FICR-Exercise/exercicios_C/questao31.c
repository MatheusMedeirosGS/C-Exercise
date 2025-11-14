/*Questao 31: A conversao de graus Fahrenheit para Celsius e obtida por c = 5/9 ? (f ? 32).
Faca um algoritmo que calcule e escreva uma tabela de graus Celsius em graus Fahrenheit, cujos 
graus variem de 50 a 65 de 1 em 1.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int f;
    float c;

    for(f = 50; f <= 65; f++){
        c = 5/9.0 * (f -32);
        printf("%d F = %.2f C\n", f, c);
    }
    
    return 0;
}