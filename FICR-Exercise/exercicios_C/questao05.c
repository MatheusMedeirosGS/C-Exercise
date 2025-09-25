//Questao 5: Fazer um algoritmo que converta centimetros para polegadas (obs.: 1pol = 2.54cm).
#include <stdio.h>

int main()
{	
	float cm;
	printf("Digite o valor em centimetros: ");
	scanf("%f", &cm);

	printf("Em polegadas, o valor e: %.2fpol\n", cm / 2.54);

	system("pause");
	return 0;
}
