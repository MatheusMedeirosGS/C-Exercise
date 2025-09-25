//Questao 9: Ler dois valores para as variaveis A e B, e efetuar as trocas dos valores de forma
//que a variavel A passe a possuir o valor da variavel B e a variavel B passe a possuir o valor da
//variavel A. Apresentar os valores trocados.

#include <stdio.h>

int main()
{
	int a, b, temp;
	printf("Digite dois numeros (A e B): ");
	scanf("%d %d", &a, &b);

	temp = a;
	a = b;
	b = temp;

	printf("Valores trocados = A: %d, B: %d\n", a, b);

	system("pause");
	return 0;
}
