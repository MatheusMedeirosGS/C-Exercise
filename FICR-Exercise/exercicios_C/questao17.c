/*Questao 17: Faca um algoritmo que leia dois numeros e identifique se sao iguais ou diferentes.
Caso eles sejam iguais, mostre uma mensagem dizendo que eles sao iguais. Caso sejam diferentes,
informe qual numero e o maior, e uma mensagem que sao diferentes.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");
    
	int num1, num2;

	printf("Digite o primeiro número inteiro: ");
	scanf("%i", &num1);

	printf("Digite o segundo número inteiro: ");
	scanf("%i", &num2);

	if (num1 == num2)
	{
		printf("Os numeros são iguais. \n");
	}
	else
	{
		printf("Os numeros são diferentes. \n");
		if (num1 > num2)
		{
			printf("O maior número é: %i\n", num1);
		}
		else
		{
			printf("O maior número é: %i\n", num2);
		}
	}

	return 0;
}
