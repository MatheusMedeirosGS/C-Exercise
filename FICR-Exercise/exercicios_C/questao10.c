/*Questao 10: Faca um algoritmo que mostra a quantidade de cedulas de um caixa eletronico de
um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
apresente a quantidade de cada cedula que o cliente devera receber, de forma que a quantidade
de cedulas seja o menor possivel.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale (LC_ALL,"");
    
	int valor_int;

	printf("Digite o valor do saque: ");
	scanf("%i", &valor_int);

	printf("\nValor a ser sacado: R$ %d,00\n", valor_int);
	printf("Quantidade de cédulas que você receberá: \n");

    printf("%i Cédula(s) de R$ 200 \n", valor_int / 200);
	valor_int %= 200;

	printf("%i Cédula(s) de R$ 100 \n", valor_int / 100);
    valor_int %= 100;

	printf("%i Cédula(s) de R$ 50 \n", valor_int / 50);
    valor_int %= 50;

	printf("%i Cédula(s) de R$ 20 \n", valor_int / 20);
    valor_int %= 20;

	printf("%i Cédula(s) de R$ 10 \n", valor_int / 10);
    valor_int %= 10;

	printf("%i Cédula(s) de R$ 5 \n", valor_int / 5);
    valor_int %= 5;

    printf("%i Cédula(s) de R$ 2 \n", valor_int / 2);

	return 0;
}
