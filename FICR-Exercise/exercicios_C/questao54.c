/*Questão 54. Calcular quantos elementos do vetor estão acima da média apresentada no exercício
anterior.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float vetorSoma[10], soma = 0.0, media;
    float tamanho = (float)sizeof(vetorSoma)/sizeof(vetorSoma[0]);
    int i, quantidadeAcima = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 10; i++){
        printf("Digite o número da posição %d: ", i + 1);
        scanf("%f", &vetorSoma[i]);

        soma += vetorSoma[i];
    }

    media = soma/tamanho;

    for(i = 0; i < 10; i++){
        if(vetorSoma[i] > media){
            quantidadeAcima++;
        }
    }

    printf("\nO valor da média é %.2f e há %d elemento(s) acima da média.", media, quantidadeAcima);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}