//Questao 23: Escreva um algoritmo para calcular as raizes de uma equacao do 2º grau pela formula de bhaskara
//Para o discriminante ha tres possiveis situacoes:

//a) Se D < 0, nao ha solucao real, pois nao existe raiz quadrada de numero negativo.
//b) Se D = 0, ha duas solucoes iguais.
//c) Se D > 0, ha duas solucoes reais e diferentes.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double a, b, c;
	double delta, x1, x2;

	printf("Calculo das raizes de uma equacao do 2 grau (ax2 + bx + c = 0)\n\n");

	printf("Digite o valor do coeficiente a: ");
	scanf("%lf", &a);

	printf("Digite o valor do coeficiente b: ");
	scanf("%lf", &b);

	printf("Digite o valor do coeficiente c: ");
	scanf("%lf", &c);

	if (a == 0)
	{
		printf("O coeficiente 'a' deve ser diferente de zero para ser uma equacao do 2 grau.\n");
	}
	else
	{
		delta = (b * b) - (4 * a * c);

		if (delta < 0)
		{
			printf("Nao ha raizes reais, pois o delta (%.2f) e negativo.\n", delta);
		}
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
			printf("Nao ha uma unica raiz real (raizes iguais): \n");
			printf("x = %.2f\n", x1);
		}
		else
		{
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			printf("Nao duas raizes reais e distintas: \n");
			printf("x1 = %.2f\n", x1);
			printf("x2 = %.2f\n", x2);
		}
	}

	system("pause");
	return 0;
}
