/*Questao 5: Fazer um algoritmo que converta centimetros para polegadas (obs.: 1pol = 2.54cm).*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");
    
	float cm;
	printf("Digite o valor em centimetros: ");
	scanf("%f", &cm);

	printf("Em polegadas, o valor é: %.2fpol\n", cm / 2.54);

	return 0;
}
