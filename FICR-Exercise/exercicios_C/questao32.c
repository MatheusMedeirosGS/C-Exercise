/*Questão 32. Construa um algoritmo que leia um conjunto de 20 números inteiros e mostre qual
foi o maior valor fornecido.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, n, maiorNumero;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 20; i++){
        printf("Digite algum valor: ");
        scanf("%d", &n);

        if(i == 0){
            maiorNumero = n;
        }

        if(maiorNumero <= n){
            maiorNumero = n;
        }
    }
    printf("\nO maior número é %d", maiorNumero);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}