/*Questao 7: Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro.
/(A = 2pr(h + r), V = pr2h)*/

#include <stdio.h>
#include <locale.h>
#define PI 3.14159

int main()
{	
    setlocale (LC_ALL, "");
    
	float r, h, a, v;
	printf("Digite o raio e a altura do cilindro: ");
	scanf("%f %f", &r, &h);

	a = 2*PI*r*(h+r);
	v = PI*r*r*h;

	printf("Área: %.2f\n", a);
	printf("Volume: %.2f\n", v);

    return 0;
}
