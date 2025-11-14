/*Questão 26. Fazer um algoritmo que calcule e mostre a tabuada do 7.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i <= 10; i++){
        printf("7x%d=%d\n", i, i*7);
    }
    printf("-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}