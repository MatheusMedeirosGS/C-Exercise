/*Questao 42: Escreva um algoritmo que leia os valores das variaveis X e A e calcule o valor de
S dado por:
S = (1/A) * (20/X) + (2/(A - 1)) * (19/x^2) + ... + (20/(A - 19) * (1/(x^20)))*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int A, X, i;
    double S = 0.0;

    printf("Digite o valor de A que não esteja no intervalo [0,19]: ");
    scanf("%d", &A);
    printf("Digite o valor de X que seja diferente de 0: ");
    scanf("%d", &X);

    while ((A >= 0 && A <= 19) || (X == 0))
    {
        printf("\nOu o valor de A quando subtraido por algum número do intervalo [1,20] resultará em 0 ou o valor de X se for igual a 0 resultará em 0 e não existe divisão por 0.");
        printf("\n\nDigite um valor para A que não esteja no intervalo [1,19]: ");
        scanf("%d", &A);
        printf("\nDigite um valor para X que seja diferente de 0: ");
        scanf("%d", &X);
    }

    for (i = 1; i <= 20; i++)
    {
        S += ((double)(i) / (A - (i - 1))) * ((double)(20 - (i - 1)) / (pow(X, i)));
    }

    printf("\nO valor de S é: %.2lf", S);

    return 0;
}