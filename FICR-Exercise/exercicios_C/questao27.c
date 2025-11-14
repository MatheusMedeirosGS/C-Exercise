/*Questão 27. Fazer um algoritmo que calcule e mostre o quadrado dos números inteiros compreendidos 
entre 15 e 30.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 15; i < 30; i++){
        if(i > 15){
            printf("Quadrado de %d é: %.0lf\n", i, pow(i, 2));
        }
    }
    printf("-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}