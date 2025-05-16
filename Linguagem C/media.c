/**************************************************************************************************************************************
 Esse código tem o objetivo de calcular a média ponderada das notas de um aluno X e então mostrar se ele(a) está ou não aprovado;
 **************************************************************************************************************************************/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    /*Declara-se as variáveis*/
    float pA, pB, pC, media;  /*pA=Prova A, pB= Prova B, pC = Prova C*/ /*pA tem peso 2, pB tem peso 3 e pC tem peso5*/

    /*Começa-se a receber as notas das provas*/
    printf("Insira o valor da sua primeira prova: \n");
    scanf("%f", &pA);

    printf("Insira o valor da sua segunda prova: \n");
    scanf("%f", &pB);

    printf("Insira o  valor da sua última prova: \n");
    scanf("%f", &pC);

    /*Calcula-se a média ponderada das notas*/
    media = ( (pA * 2) + (pB * 3) + (pC * 5)) / (2 + 3 + 5);

    /*Usa-se uma estrutura de decisão para mostrar ao aluno X se ele(a) está ou não aprovado*/
    if (media >= 7.0){
        printf("Você está aprovado! \n");
    }
    else{
        printf("Você está reprovado!\n");
    }
    printf("Sua média foi: %2.2f", media);
    return 0;
}