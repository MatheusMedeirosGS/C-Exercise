/*Questao 25: faca um algoritmo que mostre os numeros pares compreendidos entre 14 e 30 (inclusive).*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int i;

    for(i = 14; i <= 30; i++){
        if(i%2 == 0 && i >= 14){
            printf("%d\n", i);
        }
    }
    
    return 0;
}