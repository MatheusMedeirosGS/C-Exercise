/*Questão 28. Fazer um algoritmo que calcule e mostre a soma dos cem primeiros números
inteiros.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for (i = 1; i <= 100; i++)
    {
        printf("%d + %d = %d\n", j, i, j + i);
        j += i;
    }
    printf("-------------------------------------------------------------------------------------------------------------");

    return 0;
}