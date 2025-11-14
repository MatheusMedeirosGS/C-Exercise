/*Questão 31. A conversão de graus Fahrenheit para Celsius é obtida por c = 5/9 ? (f ? 32).
Faça um algoritmo que calcule e escreva uma tabela de graus Celsius em graus Fahrenheit, cujos 
graus variem de 50 a 65 de 1 em 1.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int f;
    float c;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(f = 50; f <= 65; f++){
        c = 5/9.0 * (f -32);
        printf("%d°F = %.2f°C\n", f, c);
    }
    printf("-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}