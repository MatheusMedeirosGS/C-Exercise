/*Questao 20: Escrever um algoritmo que leia tres valores inteiros distintos e os escreva em ordem crescente.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL;"");
    
	int a, b, c, temp;

	printf("Digite o primeiro valor inteiro: ");
	scanf("%i", &a);

	printf("Digite o segundo valor inteiro: ");
	scanf("%i", &b);

	printf("Digite o terceiro valor inteiro: ");
	scanf("%i", &c);

	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}

	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	printf("Os valores em ordem crescente são: %i, %i, %i\n", a, b, c);

	return 0;
}
