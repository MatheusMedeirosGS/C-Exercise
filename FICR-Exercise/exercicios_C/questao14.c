//Questao 14: Faca um algoritmo que recebe um valor inteiro e mostra se o valor e zero, positivo ou negativo.

#include <stdio.h>
#include <locale.h>

int main()
{
	int num;

	printf("Digite um valor inteiro: ");
	scanf("%i", &num);

	if (num > 0)
	{
		printf("O numero %i e positivo.\n", num);
	}
	else if (num < 0)
	{
		printf("O numero %i e negativo.\n", num);
	}
	else
	{
		printf("O valor informado e zero.\n");
	}

	system("pause");
	return 0;
}
