//Questao 16: Faca um algoritmo que recebe um valor inteiro, caso esse numero seja positivo,
//mostre o valor digitado, caso seja negativo mostre o valor digitado com o sinal invertido.

#include <stdio.h>
#include <locale.h>

int main()
{
	int valor;

	printf("Digite um valor inteiro: ");
	scanf("%i", &valor);

	if (valor < 0)
	{
		valor = -valor;
	}

	printf("O resultado e: %i\n", valor);

	system("pause");
	return 0;
}
