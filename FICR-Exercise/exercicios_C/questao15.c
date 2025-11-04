/*Questao 15: Faca um algoritmo que recebe um valor e mostra se o mesmo e par ou impar.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");
    
	int valor;

	printf("Digite um valor inteiro: ");
	scanf("%i", &valor);

	if ((valor % 2) == 0)
	{
		printf("O númuero %i é par. \n", valor);
	}
	else
	{
		printf("O número %i é impar. \n", valor);
	}

	return 0;
}
