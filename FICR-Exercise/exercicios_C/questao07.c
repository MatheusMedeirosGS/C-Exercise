//Questao 7: Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro.
//(A = 2pr(h + r), V = pr2h)

#include <stdio.h>
#define PI 3.14159

int main()
{	
	float r, h, a, v;
	printf("Digite o raio e a altura do cilindro: ");
	scanf("%f %f", &r, &h);

	a = 2 * PI * r * (h + r);
	v = PI * r * r * h;

	printf("Area: %.2f\n", a);
	printf("Volume: %.2f\n", v);

	system("pause");
	return 0;
}
