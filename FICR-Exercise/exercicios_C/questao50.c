/* Questão 50. Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de 15 pessoas.
    Faça um programa que calcule e mostre:
    a) a maior e a menor altura do grupo;
    b) a média de altura das mulheres;
    c) o número de homens.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int sexo, i, homens = 0, mulheres = 0;
    float altura = 0.00, maiorAltura = 0.0, menorAltura = 0.0, somaAlturaMulheres = 0.0, mediaMulheres;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 15; i++){
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("1. Masculino\n");
        printf("2. Feminino\n");
        printf("Digite o número correspondente: ");
        scanf("%d", &sexo);

        switch (sexo)
        {
        case 1:
            homens++;
            break;
        case 2:
            somaAlturaMulheres += altura;
            mulheres++;
            break;
        default:
            break;
        }

        if(i == 0){
            maiorAltura = altura;
            menorAltura = altura;
        } else if(altura >= maiorAltura){
            maiorAltura = altura;
        } else if(altura <= menorAltura){
            menorAltura = altura;
        }
    }
    
    if(mulheres == 0){
        mediaMulheres = 0;
    } else{
        mediaMulheres = somaAlturaMulheres/mulheres;
    }

    printf("\nA maior altura é %.2f e a menor é %.2f.", maiorAltura, menorAltura);
    printf("\nA média de altura das mulheres é: %.2f.", mediaMulheres);
    printf("\nO número de homens é: %d.", homens);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}