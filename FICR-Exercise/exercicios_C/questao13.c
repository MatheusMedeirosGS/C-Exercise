//Questao 13; O preco de um automovel e calculado pela soma do preco de fabrica, o preco dos
//impostos (45% do preco de fabrica) e a porcentagem do revendedor (28% do preco de fabrica).
//Fazer um algoritmo que leia o preco de fabrica. Calcule e mostre o preco final do carro.

#include <stdio.h>
#include <locale.h>

int main()
{
	float preco_de_fabrica, preco_final;
	const float percen_impostos = 0.45;
	const float percen_reven = 0.28;

	printf("Digite o preco de fabrica do automovel: R$ ");
	scanf("%f", &preco_de_fabrica);

	preco_final = preco_de_fabrica * (1 + percen_impostos + percen_reven);

	printf("O preco final do carro para o consumidor e: R$ %.2f\n", preco_final);

	system("pause");
	return 0;
}
