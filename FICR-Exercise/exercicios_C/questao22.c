//Questao 22: Escreva um algoritmo para ler 2 valores inteiros e uma das seguintes operacoes a
//serem executadas: 1. Adicao, 2. Subtracao, 3. Divisao e 4. Multiplicacao. Calcular e mostrar o
//resultado da operacao.

#include <stdio.h>
#include <locale.h>

int main()
{
	int v1, v2, operacao;
	double result;

	printf("Digite o primeiro valor inteiro: ");
	scanf("%i", &v1);

	printf("Digite o segundo valor inteiro: ");
	scanf("%i", &v2);

	printf("Escolha a operacao a ser executada: \n");
	printf("1. Adicao \n");
	printf("2. Subtracao \n");
	printf("3. Divisao \n");
	printf("4. Multiplicacao \n");
	printf("Sua escolha: ");
	scanf("%i", &operacao);

	switch (operacao)
	{
	case 1:
		result = v1 + v2;
		printf("Resultado: %i+ %i = %.2f\n", v1, v2, result);
		break;
	case 2:
		result = v1 - v2;
		printf("Resultado: %d - %d = %.2f\n", v1, v2, result);
		break;
	case 3:
		if (v2 == 0)
		{
			printf("Erro: Divisao por zero nao e permitida. \n");
		}
		else
		{
			result = (double)v1 / v2;
			printf("Resultado: %i / %i = %.2f\n", v1, v2, result);
		}
		break;
	case 4:
		result = v1 * v2;
		printf("Resultado: %i * %i = %.2f\n", v1, v2, result);
		break;
	default:
		printf("Erro: Opcao invalida. Por favor, escolha um numero de 1 a 4. \n");
		break;
	}

	system("pause");
	return 0;
}
