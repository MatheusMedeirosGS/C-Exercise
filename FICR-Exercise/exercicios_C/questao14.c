/*Questao 14: Faca um algoritmo que recebe um valor inteiro e mostra se o valor e zero, positivo ou negativo.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");
    
	int num;

	printf("Digite um valor inteiro: ");
	if (scanf("%i", &num) != 1) { 
        printf("Erro: A entrada não é um número inteiro válido.\n");
        return 1;
	}

	if (num > 0)
	{
		printf("O número %i é positivo.\n", num);
	}
	else if (num < 0)
	{
		printf("O número %i é negativo.\n", num);
	}
	else
	{
		printf("O valor informado é zero.\n");
	}

	return 0;
}
