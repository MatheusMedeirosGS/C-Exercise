/*Questão 34. Ler 10 valores, um de cada vez, e contar quantos deles estão no intervalo [10...50]
e quantos deles estão fora deste intervalo. Mostrar as quantidades calculadas.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i, n, dentroDoIntervalo = 0, foraDoIntervalo = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 10; i++){
        printf("Digite algum valor: ");
        scanf("%d", &n);

        if(n >= 10 && n <= 50){
            dentroDoIntervalo++;
        } else{
            foraDoIntervalo++;
        }
    }
    printf("\n%d números estão dentro e %d números estão fora do intervalo.", dentroDoIntervalo, foraDoIntervalo);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}