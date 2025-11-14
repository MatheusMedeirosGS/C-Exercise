/*Questao 43. Um determinado material radioativo perde metade de sua massa a cada 50 segun-
dos. Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessario
para que essa massa se torne menor do que 0.5 gramas. Escrever a massa inicial, a massa final
e o tempo calculado em segundos.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int tempo = 0;
    float massaIncial, massaFinal = 0;

    printf("Digite a massa inicial do material radioativo em gramas: ");
    scanf("%f", &massaIncial);

    massaFinal = massaIncial;
    if(massaIncial >= 0.5){
        do{
            massaFinal /= 2;
            tempo += 50;
        } while(massaFinal >= 0.5);
        printf("\nA massa inicial de %.2fg foi para %.2f em %ds.", massaIncial, massaFinal, tempo);
    } else{
        printf("A massa inicial de %.2f j é menor a 0.5g.", massaIncial);
    }
    

    return 0;
}