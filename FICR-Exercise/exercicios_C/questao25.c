/*Questão 25. Faça um algoritmo que mostre os números pares compreendidos entre 14 e 30 (inclusive).*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 14; i <= 30; i++){
        if(i%2 == 0 && i >= 14){
            printf("%d\n", i);
        }
    }
    printf("-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}