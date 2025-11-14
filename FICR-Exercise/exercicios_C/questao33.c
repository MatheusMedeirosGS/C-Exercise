/*Calcular e mostrar a média aritmética dos números pares compreendidos entre 13
e 73*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i, divisor = 0, dividendo = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 13; i < 73; i++){
        if(i%2 == 0){
            dividendo += i;
            divisor++;
        }
    }

    printf("A média aritmética é: %.2f", (float)dividendo/divisor);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}