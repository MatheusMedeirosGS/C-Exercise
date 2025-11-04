/*Questao 18: As macas custam R$0.30 cada, se forem compradas menos do que uma duzia, e
R$0.25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o numero de macas
compradas, calcule e mostre o valor total da compra.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");
    
	int num_macas;
	double valor_total;

	printf("Digite o número de maças compradas: ");
	scanf("%i", &num_macas);

	if (num_macas < 12)
	{
		valor_total = num_macas * 0.30;
	}
	else
	{
		valor_total = num_macas * 0.25;
	}

	printf("O valor total da compra é: R$ %.2f\n", valor_total);

	return 0;
}
