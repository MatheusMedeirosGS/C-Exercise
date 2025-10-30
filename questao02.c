/*Questao 2: Fazer um algoritmo que leia um numero e mostre o seu antecessor e o seu sucessor.*/

#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL,"");
    
	int x;
	printf("Digite um numero inteiro: ");
	scanf("%i", &x);

	printf("O antecessor desse numero é: %i\n", x - 1);
	printf("E o sucessor desse numero é: %i\n", x + 1);

	return 0;
}
