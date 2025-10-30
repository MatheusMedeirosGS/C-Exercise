/*Questao 3: Fazer um algoritmo que obtenha dois numeros inteiros, x e y, mostre o quociente e o resto da divisao inteira entre eles.*/

#include <stdio.h>
#include <locale.h>

int main()
{	
    setlocale (LC_ALL,"");
    
	int x, y;
	printf("Digite dois valores inteiros (x y): ");
	scanf("%i %i", &x, &y);

	printf("O quociente é: %i\n", x / y);
	printf("E o resto é: %i\n", x % y);
	
	return 0;
}
