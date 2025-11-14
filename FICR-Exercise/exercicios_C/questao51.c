/* Questão 51. Uma determinada empresa fez uma pesquisa de mercado para saber se as
    pessoas gostaram ou não de um novo produto lançado no mercado. Para isso forneceu o
    sexo do entrevistado (M - masculino, F - feminino) e a sua resposta (S - sim, N - não).
    Sabendo-se que foram entrevistadas 20 pessoas, fazer um programa que calcule e escreva:
    a) o número de pessoas que responderam sim,
    b) o número de pessoas que responderam não,
    c) a porcentagem de pessoas do sexo feminino que responderam sim,
    d) a porcentagem de pessoas do sexo masculino que responderam não */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char sexo, pesquisa;
    int pessoasQueResponderamSim = 0, pessoasQueResponderamNao = 0, i, homensQueResponderamNao = 0, mulheresQueResponderamSim = 0, totalHomens = 0, totalMulheres = 0;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < 20; i++){
        printf("Digite o sexo (M) ou (F): ");
        scanf(" %c", &sexo);
        printf("Gostou do produto? (S) ou (N): ");
        scanf(" %c", &pesquisa);

        if(sexo == 'M'){
        totalHomens++;
        } else if(sexo == 'F'){
        totalMulheres++;
        }

        switch (pesquisa)
        {
        case 'S':
            pessoasQueResponderamSim++;
            if(sexo == 'F'){
                mulheresQueResponderamSim++;
            }
            break;
        case 'N':
            pessoasQueResponderamNao++;
            if (sexo == 'M'){
                homensQueResponderamNao++;
            }
            break;
        default:
            break;
        }
    }

    printf("Número de pessoas que reponderam sim: %d", pessoasQueResponderamSim);
    printf("Número de pessoas que reponderam não: %d", pessoasQueResponderamNao);
    printf("%.2f de mulheres responderam sim.", ((float)mulheresQueResponderamSim/totalMulheres) * 100);
    printf("%.2f de homens responderam não.", ((float)homensQueResponderamNao/totalHomens) * 100);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}