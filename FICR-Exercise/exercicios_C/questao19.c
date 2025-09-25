//Questao 19: Escreva um algoritmo que recebe tres valores inteiros e mostre o valor do maior
//numero digitado pelo usuario.

#include <stdio.h>
#include <locale.h>

int main()
{
	int num1, num2, num3;
	int maior;

	printf("Digite o primeiro valor inteiro: ");
	scanf("%i", &num1);

	printf("Digite o segundo valor inteiro: ");
	scanf("%i", &num2);

	printf("Digite o terceiro valor inteiro: ");
	scanf("%i", &num3);

	maior = num1;

	if (num2 > maior)
	{
		maior = num2;
	}

	if (num3 > maior)
	{
		maior = num3;
	}

	printf("O maior valor digitado foi: %i\n", maior);

	system("pause");
	return 0;
}
