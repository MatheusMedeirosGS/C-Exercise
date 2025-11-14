/*Questão 35. Construa um algoritmo que calcule e mostre o valor de H, sendo H calculado por:
H = 1 + 2 + 3 + 4 + ... + N*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n, i, H = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++){
        H += i; 
    }

    printf("O valor de H é: %d", H);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}