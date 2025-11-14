/*Questao 29: Fazer um algoritmo que leia 5 numeros e verifique se ele esta entre 100 e 200.
Se estiver na faixa, mostrar ?Voce digitou um numero entre 100 e 200?, se nao estiver na faixa,
mostrar? Voce digitou um numero fora da faixa entre 100 e 200?.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int n, i;
 
    for(i = 0; i < 5; i++){
        printf("Digite algum número: ");
        scanf("%d", &n);

        if(100 < n && n < 200){
            printf("Você digitou um número entre 100 e 200\n");
        } else{
            printf("Você digitou um número fora da faixa entre 100 e 200\n");
        }
    }
    
    return 0;
}