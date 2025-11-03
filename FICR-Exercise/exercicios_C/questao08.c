/*Questao 8: Escreva um algoritmo que recebe o valor do salario fixo e o total de vendas efetuadas
por um vendedor de uma loja durante o mes (em dinheiro). Sabendo que este vendedor ganha
15% de comissao sobre suas vendas efetuadas, informar o salario fixo e salario no final do mes:*/

#include <stdio.h>
#include <locale.h>

int main()
{	
    setlocale (LC_ALL,"");
    
	float s_fixo, vendas, s_total;

	printf("Digite o salario fixo: ");
	scanf("%f", &s_fixo);
	printf("Digite o total de vendas: ");
	scanf("%f", &vendas);

	s_total = s_fixo + (vendas * 0.15);

	printf("Salario fixo: %.2f\n", s_fixo);
	printf("Salario final: %.2f\n", s_total);

	return 0;
}
