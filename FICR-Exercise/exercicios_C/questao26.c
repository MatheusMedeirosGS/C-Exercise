/*Questao 26: Fazer um algoritmo que calcule e mostre a tabuada do 7.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int i;

    for(i=0; i <= 10; i++){
        printf("7x%d=%d\n", i, i*7);
    }
    
    return 0;
}