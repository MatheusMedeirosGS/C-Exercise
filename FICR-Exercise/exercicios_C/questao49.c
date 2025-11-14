/* Questão 49. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
    dados sobre o salário e o número de filhos. A prefeitura deseja saber:
    a) A média do salário da população;
    b) A média do número de filhos;
    c) O maior salário;
    d) A porcentagem de pessoas com salários até R$1000,00. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int comando, denominador = 0, filhos, salariosTotais = 0, salariosAteMilReais = 0;
    float salario, somaDeSalarios = 0.0, mediaDeSalario, somaDeFilhos = 0.0, mediaDeFilhos, maiorSalario = 0.0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    do{
        printf("1. Adicionar informações\n");
        printf("2. Sair\n");
        printf("Escolha: ");
        scanf("%d", &comando);

        if(comando == 1){
            printf("\nDigite o salário: ");
            scanf("%f", &salario);
            printf("Digite a quantidade de filhos: ");
            scanf("%d", &filhos);

            denominador++;

            somaDeSalarios += salario;
            somaDeFilhos += filhos;

            while(maiorSalario == 0){
                maiorSalario = salario;
                break;
            }
            if(salario > maiorSalario){
                maiorSalario = salario;
            }
            
            salariosTotais++;
            if(salario <= 1000.00){
            salariosAteMilReais++;
            }
        } 
    } while (comando == 1);
    
    if(salariosTotais != 0){
        mediaDeSalario = somaDeSalarios/denominador;
        mediaDeFilhos = somaDeFilhos/denominador;

        printf("\nA média de salário é de R$%.2f\n", mediaDeSalario);
        printf("A média de filhos é: %.2f\n", mediaDeFilhos);
        printf("O maior salário é R$%.2f\n", maiorSalario);
        printf("%.2f%% de salário até R$1.000,00", ((float)salariosAteMilReais/salariosTotais) * 100);
    } else{
        printf("Você não informou nenhum dado");
    }
    
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}