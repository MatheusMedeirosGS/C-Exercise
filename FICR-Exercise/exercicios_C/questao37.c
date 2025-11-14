/*Questao 37: Calcular o valor de S dado pela sequecia:
S = 1 + 3/2 + 5/3 + ... + 99/50*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int i, j;
    float S = 0.0;

    for(i = 1, j = 1; i <= 99 && j <=50; j++, i += 2){
        S += (float)i/j;
    }
    printf("O valor de S é: %.2f", S);
    
    return 0;
}