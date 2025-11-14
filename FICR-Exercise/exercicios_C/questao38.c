/*Questão 38. Faça um algoritmo que leia um valor x, calcule e mostre os 20 primeiros termos
da série:*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, i;
    float S = 0.0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o valor de x que não esteja no intervalo [1,20]: ");
    scanf("%d", &x);

    if (x >= 1 && x <= 20)
    {
        printf("O valor de x quando subtraído por algum número do intervalo [1,20] resultará em 0 e não existe divisão por 0;");
    } else{
        for (i = 1; i <= 20; i++)
        {
            S += (float)1 / (x - i);
        }
        printf("O resultado é: %.2f", S);
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}