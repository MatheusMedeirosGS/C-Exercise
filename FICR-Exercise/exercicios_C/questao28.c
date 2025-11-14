/*Questao 28. Fazer um algoritmo que calcule e mostre a soma dos cem primeiros numeros
inteiros.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, j = 0;

    for (i = 1; i <= 100; i++)
    {
        printf("%d + %d = %d\n", j, i, j + i);
        j += i;
    }

    return 0;
}