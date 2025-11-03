/*Questao 11: Faca um algoritmo que auxiliar um funcionario de um caixa de supermercado. O
algoritmo devera receber como entrada o valor da compra do cliente e o valor pago pelo cliente,
em seguida o algoritmo devera apresentar o troco da compra, de forma que o mesmo deve
apresentar a quantidade de cedulas e moedas para compor o troco do cliente.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    setlocale (LC_ALL,"");
    
	double valor_compra, valor_pago;

	printf("Digite o valor da compra: ");
	scanf("%lf", &valor_compra);

	printf("Digite o valor que vai ser pago: ");
	scanf("%lf", &valor_pago);

	double troco_double = valor_pago - valor_compra;

	printf("\nValor do troco = R$ %.2f \n", troco_double);
    printf("Distribuição do troco: \n");

	int valor_decimal = (int)round(troco_double * 100.0);

	printf("%i Cédula(s) de R$ 200.00 \n", valor_decimal / 20000);
    valor_decimal %= 20000;

    printf("%i Cédula(s) de R$ 100.00 \n", valor_decimal / 10000);
    valor_decimal %= 10000;

	printf("%i Cédula(s) de R$ 50.00 \n", valor_decimal / 5000);
    valor_decimal %= 5000;

	printf("%i Cédula(s) de R$ 20.00 \n", valor_decimal / 2000);
    valor_decimal %= 2000;

	printf("%i Cédula(s) de R$ 10.00 \n", valor_decimal / 1000);
    valor_decimal %= 1000;
    
	printf("%i Cédula(s) de R$ 5.00 \n", valor_decimal / 500);
    valor_decimal %= 500;

	printf("%i Cédula(s) de R$ 2.00 \n", valor_decimal / 200);
    valor_decimal %= 200;

	printf("%i Moeda(s) de R$ 1.00 \n", valor_decimal / 100);
    valor_decimal %= 100;

	printf("%i Moeda(s) de R$ 0.50 \n", valor_decimal / 50);
    valor_decimal %= 50;

	printf("%i Moeda(s) de R$ 0.25 \n", valor_decimal / 25);
    valor_decimal %= 25;

	printf("%i Moeda(s) de R$ 0.10 \n", valor_decimal / 10);
    valor_decimal %= 10;

	printf("%i Moeda(s) de R$ 0.05 \n", valor_decimal / 5);

	return 0;
}
