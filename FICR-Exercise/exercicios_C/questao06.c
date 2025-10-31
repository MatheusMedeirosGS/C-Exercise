/*Questao 6 Faca um algoritmo que recebe o valor do raio de um circulo e apresenta o valor da area desse circulo.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159


int main()
{	
    setlocale (LC_ALL,"");
    
	float radius;
	printf("Digite o raio do circulo: ");
	scanf("%f", &radius);

	printf("Área do circulo é: %.2fcm\n", PI*radius*radius);

	return 0;
}
