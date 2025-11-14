/*Questao 44. Construa um algoritmo que leia varios numeros inteiros e positivos, calculando ao
final da sequencia a soma e a media desses numeros. A sequencia termina quando o usuario
digitar um valor negativo.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int x, numerador = 0;
    float denominador = 0.0, quociente = 0.0;

    do{
        printf("Digite um valor sendo um inteiro positivo: ");
        scanf("%d", &x);

        if(x > 0){
            numerador += x;
            denominador++;
            printf("%.2f", denominador); 
        }
    } while(x >= 0);
    
    if(denominador != 0){
        quociente = numerador/denominador;
    }
    
    printf("O resultado das somas é %d e sua média é: %.2f.", numerador, quociente);

    return 0;
}