//Questao 11: Faca um algoritmo que auxiliar um funcionario de um caixa de supermercado. O
//algoritmo devera receber como entrada o valor da compra do cliente e o valor pago pelo cliente,
//em seguida o algoritmo devera apresentar o troco da compra, de forma que o mesmo deve
//apresentar a quantidade de cedulas e moedas para compor o troco do cliente.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	double valor_compra, valor_pago;

	printf("Digite o valor da compra: ");
	scanf("%lf", &valor_compra);

	printf("Digite o valor que vai ser pago: ");
	scanf("%lf", &valor_pago);

	float troco;
	troco = valor_pago - valor_compra;

	printf("Valor do troco = R$ %.2f \n", troco);

	int valor_decimal, quant;
	valor_decimal = troco * 100;

	quant= valor_decimal / 20000;
	printf("%i Cedula(s) de R$ 200 \n", quant);
	valor_decimal %= 20000;

	quant = valor_decimal / 10000;
	printf("%i Cedula(s) de R$ 100 \n", quant);
	valor_decimal %= 10000;

	quant = valor_decimal / 5000;
	printf("%i Cedula(s) de R$ 50 \n", quant);
	valor_decimal %= 5000;

	quant = valor_decimal / 2000;
	printf("%i Cedula(s) de R$ 20 \n", quant);
	valor_decimal %= 2000;

	quant = valor_decimal / 1000;
	printf("%i Cedula(s) de R$ 10 \n", quant);
	valor_decimal %= 1000;

	quant = valor_decimal / 500;
	printf("%i Cedula(s) de R$ 5 \n", quant);
	valor_decimal %= 500;

	quant = valor_decimal / 200;
	printf("%i Cedula(s) de R$ 2 \n", quant);
	valor_decimal %= 200;

	quant = valor_decimal / 100;
	printf("%i Cedula(s) de R$ 1 \n", quant);
	valor_decimal %= 100;

	quant = valor_decimal / 50;
	printf("%i Moeda(s) de R$ 0.50 \n", quant);
	valor_decimal %= 50;

	quant = valor_decimal / 25;
	printf("%i Moeda(s) de R$ 0.25 \n", quant);
	valor_decimal %= 25;

	quant = valor_decimal / 10;
	printf("%i Moeda(s) de R$ 0.10 \n", quant);
	valor_decimal %= 10;

	quant = valor_decimal / 5;
	printf("%i Moeda(s) de R$ 0.05 \n", quant);
	valor_decimal %= 5;

	system("pause");
	return 0;
}
