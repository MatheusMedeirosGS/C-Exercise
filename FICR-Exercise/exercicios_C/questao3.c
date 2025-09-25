//Questao 3: Fazer um algoritmo que obtenha dois numeros inteiros, x e y, mostre o quociente eo resto da divisao inteira entre eles.
#include <stdio.h>

int main()
{	
	int x, y;
	printf("Digite dois valores inteiros (x y): ");
	scanf("%i %i", &x, &y);

	printf("O quociente e: %i\n", x / y);
	printf("E o resto e: %i\n", x % y);

	system("pause");
	return 0;
}
