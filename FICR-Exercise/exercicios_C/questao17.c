//Questao 17 : Faca um algoritmo que leia dois numeros e identifique se sao iguais ou diferentes.
//Caso eles sejam iguais, mostre uma mensagem dizendo que eles sao iguais. Caso sejam diferentes,
//informe qual numero e o maior, e uma mensagem que sao diferentes.

#include <stdio.h>
#include <locale.h>

int main()
{
	int num1, num2;

	printf("Digite o primeiro numero inteiro: ");
	scanf("%i", &num1);

	printf("Digite o segundo numero inteiro: ");
	scanf("%i", &num2);

	if (num1 == num2)
	{
		printf("Os numeros sao iguais. \n");
	}
	else
	{
		printf("Os numeros sao diferentes. \n");
		if (num1 > num2)
		{
			printf("O maior numero e: %i\n", num1);
		}
		else
		{
			printf("O maior numero e: %i\n", num2);
		}
	}

	system("pause");
	return 0;
}
