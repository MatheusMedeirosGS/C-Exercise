/*Questão 47. Tendo como entrada a altura (h) e o sexo (1: feminino e 2: masculino) de uma pessoa,
construa um algoritmo que calcule e mostre o seu peso ideal, calculado da seguinte maneira:
homens: 72.7 * h - 58
mulheres: 62.1 * h - 44.7
A altura negativa indica o fim da entrada de dados e do algoritmo. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int sexo;
    float h, pesoIdeal;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    do
    {
        printf("Digite a altura: ");
        scanf("%f", &h);

        if(h > 0){
            printf("\n1 - Feminino");
            printf("\n2 - Masculino");
            printf("\nDigite o sexo: ");
            scanf("%d", &sexo);

            switch (sexo)
            {
            case 1:
                pesoIdeal = 62.1 * h - 44.7;
                break;
            case 2:
                pesoIdeal = 72.7 * h - 58;
                break;
            default:
                break;
            }

            printf("\nO peso ideal para essa pessoa é: %.2f\n\n", pesoIdeal);
        }      
    } while (h > 0);

    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}