//Questao 2. Fazer um algoritmo que leia um numero e mostre o seu antecessor e o seu sucessor.

#include <stdio.h>
main ()
{
	int x;
	printf("Digite um numero inteiro: ");
	scanf("%i", &x);

	printf("O antecessor desse numero e: %i\n", x - 1);
	printf("E o sucessor desse numero e: %i\n", x + 1);

	system("pause");
	return 0;
}
