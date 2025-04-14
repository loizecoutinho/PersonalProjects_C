#include <stdio.h>

int main()
{
    //Declarando as variáveis:
    float salario, bonus;
    int tempo_servico;
    //Recebendo os valores:
    printf("Insira seu salário: \n");
    scanf("%f", &salario);
    
    printf("Insira seu tempo de serviço já completo(EX.: 3; 4; 5; Não pode: 2.5): \n");
    scanf("%d", &tempo_servico);
    
    //Calculando e imprimindo o valor do bônus:
    if(tempo_servico >= 5){
        bonus = (0.2 * salario);
        printf("O valor do seu bônus é: R$%f \n");
    }else{
        bonus = (0.1 * salario);
        printf("O valor do seu bônus é: R$%f \n");
    }

    return 0;
}