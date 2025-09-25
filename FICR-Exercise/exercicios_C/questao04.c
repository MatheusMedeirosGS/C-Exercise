//Questao 4: Fazer um algoritmo que calcule e mostre:
//a) A soma entre dois numero:
//b) O produto entre eles:
//O quociente entre eles:

#include <stdio.h>

int main()
{	
	float x, y;
	printf("Digite dois numeros: ");
	scanf("%f %f", &x, &y);

	printf("Soma: %.2f\n", x + y);
	printf("Produto: %.2f\n", x * y);
	printf("Quociente: %.2f\n", x / y);

	system("pause");
	return 0;
}
