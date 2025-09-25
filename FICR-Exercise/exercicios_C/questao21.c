//Questao 21: Escrever um algoritmo que leia tres valores inteiros e verifique se eles podem ser os
//lados de um triangulo. Se forem, informar qual o tipo de triangulo que eles formam: equilatero, isoscele ou escaleno.

//• Propriedade: o comprimento de cada lado de um triangulo e menor do que a soma dos comprimentos dos outros dois lados.

//• Triangulo Equilatero: aquele que tem os comprimentos dos tres lados iguais;

//• Triangulo Isoscele: aquele que tem os comprimentos de dois lados iguais. Portanto, todo
//triangulo equilatero e tambem isosceles;

//• Triangulo Escaleno: aquele que tem os comprimentos de seus tres lados diferentes.

#include <stdio.h>
#include <locale.h>

int main()
{
	int lado_a, lado_b, lado_c;

	printf("Digite o valor do primeiro lado: ");
	scanf("%i", &lado_a);

	printf("Digite o valor do segundo lado: ");
	scanf("%i", &lado_b);

	printf("Digite o valor do terceiro lado: ");
	scanf("%i", &lado_c);

	if ((lado_a < lado_b + lado_c) && (lado_b < lado_a + lado_c) && (lado_c < lado_a + lado_b))
	{
		if (lado_a == lado_b && lado_b == lado_c)
		{
			printf("Os valores formam um Triingulo Equilatero. \n");
		}
		else if (lado_a == lado_b || lado_b == lado_c || lado_a == lado_c)
		{
			printf("Os valores formam um Triangulo Isosceles. \n");
		}
		else
		{
			printf("Os valores formam um Triangulo Escaleno. \n");
		}
	}
	else
	{
		printf("Os valores informados nao podem formar um triangulo. \n");
	}

	system("pause");
	return 0;
}
