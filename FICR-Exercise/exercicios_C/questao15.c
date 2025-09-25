//Questao 15: Faca um algoritmo que recebe um valor e mostra se o mesmo e par ou impar.

#include <stdio.h>
#include <locale.h>

int main()
{
	int valor;

	printf("Digite um valor inteiro: ");
	scanf("%i", &valor);

	if ((valor % 2) == 0)
	{
		printf("O nmuero %i e par. \n", valor);
	}
	else
	{
		printf("O numero %i e impar. \n", valor);
	}

	system("pause");
	return 0;
}
