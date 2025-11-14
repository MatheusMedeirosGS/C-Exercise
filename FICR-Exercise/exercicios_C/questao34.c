/*Questao 34. Ler 10 valores, um de cada vez, e contar quantos deles estao no intervalo [10...50]
e quantos deles estao fora deste intervalo. Mostrar as quantidades calculadas.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int i, n, inintervalo = 0, outintervalo = 0;

    for(i = 0; i < 10; i++){
        printf("Digite algum valor: ");
        scanf("%d", &n);

        if(n >= 10 && n <= 50){
            inintervalo++;
        } else{
            outintervalo++;
        }
    }
    printf("\n%d números estão dentro e %d números estão fora do intervalo.", inintervalo, outintervalo);
    
    return 0;
}