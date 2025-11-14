/*Calcular e mostrar a media aritmetica dos numeros pares compreendidos entre 13
e 73*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int i, divisor = 0, dividendo = 0;

    for(i = 13; i < 73; i++){
        if(i%2 == 0){
            dividendo += i;
            divisor++;
        }
    }

    printf("A média aritmética é %.2f", (float)dividendo/divisor);
    
    return 0;
}