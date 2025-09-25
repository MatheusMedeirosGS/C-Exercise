//Questao 12: Fazer um algoritmo que calcule a media aritmetica dos numeros 7, 8 e 9 e a media
//nos numeros 4, 5 e 6. Mostre a soma das duas medias e a media das medias.

#include <stdio.h>

int main()
{	
	double m1 = (7.0 + 8.0 + 9.0) / 3.0;
	double m2 = (4.0 + 5.0 + 6.0) / 3.0;
	double soma_das_medias = m1 + m2;
	double media_das_medias = soma_das_medias / 2.0;

	printf("A soma das duas medias e: %.2f\n", soma_das_medias);
	printf("A media das medias e: %.2f\n", media_das_medias);

	system("pause");
	return 0;
}
