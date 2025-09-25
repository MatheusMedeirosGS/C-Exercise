//Questao 10: Faca um algoritmo que mostra a quantidade de cedulas de um caixa eletronico de
//um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
//apresente a quantidade de cada cedula que o cliente devera receber, de forma que a quantidade
//de cedulas seja o menor possivel.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	int valor_int;

	printf("Digite o valor do saque: ");
	scanf("%i", &valor_int);

	printf("Valor a ser sacado: R$ %d,00\n", valor_int);
	printf("Quantidade de cedulas que voce recebera: \n");

	int valor_restante = valor_int;
	int quant;

	quant = valor_restante / 200;
	printf("%i Cedula(s) de R$ 200 \n", quant);
	valor_restante %= 200;

	quant = valor_restante / 100;
	printf("%i Cedula(s) de R$ 100 \n", quant);
	valor_restante %= 100;

	quant= valor_restante / 50;
	printf("%i Cedula(s) de R$ 50 \n", quant);
	valor_restante %= 50;

	quant= valor_restante / 20;
	printf("%i Cedula(s) de R$ 20 \n", quant);
	valor_restante %= 20;

	quant = valor_restante / 10;
	printf("%i Cedula(s) de R$ 10 \n", quant);
	valor_restante %= 10;

	quant = valor_restante / 5;
	printf("%i Cedula(s) de R$ 5 \n", quant);
	valor_restante %= 5;

	quant = valor_restante / 2;
	printf("%i Cedula(s) de R$ 2 \n", quant);
	valor_restante %= 2;

	system("pause");
	return 0;
}
