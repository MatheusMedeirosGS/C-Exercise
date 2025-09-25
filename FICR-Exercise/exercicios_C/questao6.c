//Questao 6 Faca um algoritmo que recebe o valor do raio de um circulo e apresenta o valor da area desse circulo.

#include <stdio.h>
#define PI 3.14159
#include <math.h>

int main()
{	
	float radius;
	printf("Digite o raio do circulo: ");
	scanf("%f", &radius);

	printf("Area do circulo e: %.2fcm\n", PI * radius * radius);

	system("pause");
	return 0;
}
