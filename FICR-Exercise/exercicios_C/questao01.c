//Questao 1: Faca um algoritmo que recebe dois valores inteiros e mostra o resultado da multiplicacao.

#include <stdio.h>
main ()
{		
    // Variaveis 
	int a, b, result;
	
	//Entrada de dados
	printf("Digite dois valores inteiros: ");
	scanf("%i %i", &a, &b);
	
	//Saida de dados
	result = a * b;	
	printf("O resultado da multiplicacao entre os dois valores e: %i\n", result);
	 		
	system("pause"); 		
	return 0;
}