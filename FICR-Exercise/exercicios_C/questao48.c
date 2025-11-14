/* Questão 48. Construa um algoritmo que calcule e apresente o total da compra realizada pelo
cliente em uma loja. São fornecidos para o algoritmo o preço da etiqueta (PE) de cada um dos
produtos comprados e, com a compra encerrada (PE = 0), a condição de pagamento escolhida
pelo cliente (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir:
Tabela 2: Condição de pagamento de cada código.
Código da condição de pagamento   Condição de pagamento
1 - À vista em dinheiro ou cheque, com 10% de desconto
2 - À vista com cartão de crédito, com 5% de desconto
3 - Em 2 vezes, preço normal de etiqueta sem juros
4 - Em 3 vezes, preço de etiqueta com acréscimo de 10%
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int CP;
    float PE, totalCompra = 0.0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    
    do{
        printf("Digite o valor do produto: ");
        scanf("%f", &PE);
        totalCompra += PE;
    } while(PE != 0);
    
    printf("\n1 - À vista em dinheiro ou cheque.");
    printf("\n2 - À vista com cartão de crédito.");
    printf("\n3 - Em 2 vezes.");
    printf("\n4 - Em 3 vezes.");
    printf("\n\nEscolha a forma de pagamento:");
    scanf("%d", &CP);

    switch (CP){
    case 1:
        totalCompra -= (totalCompra * 0.1);
        break;
    
    case 2:
        totalCompra -= (totalCompra * 0.05);
        break;

    case 3:
        break;

    case 4:
        totalCompra += (totalCompra * 0.1);
        break;

    default:
        break;
    }

    printf("\nValor a pagar: R$%.2f", totalCompra);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}