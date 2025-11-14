/*Questao 32. Construa um algoritmo que leia um conjunto de 20 numeros inteiros e mostre qual
foi o maior valor fornecido.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, n, maiornum;

    for(i = 0; i < 20; i++){
        printf("Digite algum valor: ");
        scanf("%d", &n);

        if(i == 0){
            maiornum = n;
        }

        if(maiornum <= n){
            maiornum = n;
        }
    }
    printf("\nO maior número é %d", maiornum);

    return 0;
}