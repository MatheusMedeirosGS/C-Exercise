/*Questão 36. Calcular o valor de S dado pela sequência:
S = 1 + 1/2 + 1/3 + ... + 1/10*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i;
    float S = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 1; i <= 10; i++){
        S += 1.0/i;
    }
    printf("O valor de S é: %.2f", S);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}