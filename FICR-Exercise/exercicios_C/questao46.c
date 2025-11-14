/*Questão 46. Faça um algoritmo para calcular n! (fatorial de um número n), sendo que o valor
de n é fornecido pelo usuário. Sabe-se que:
n! = 1 ? 2 ? 3 ? ... ? (n ? 1) ? n
0! = 1, por definição.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, n;
    double fatorial = 1.0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &n);
    printf("\n");

    if (n >= 0){
        for (i = n; i > 0; i--){
            fatorial *= i;
        }

        printf("%d! é %.0lf", n, fatorial);
    } else{
        printf("Não existe fatorial para número negativo.");
    }

    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}