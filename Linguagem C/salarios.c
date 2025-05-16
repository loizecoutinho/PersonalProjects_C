/****************************************************************************************************************************
Esse código foi elaborado com o intuito de calcular e imprimir quantos salários mínimos "cabem" dentro do salário lido no código e
calcular e imprimir o valor do desconto de 8% referente ao vale  transporte.(a porcentagem é referente ao valor do salário minimo:
0.08*salar_minimo); 
 ****************************************************************************************************************************/
#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "portuguese");
/*declarando as variáveis*/
  
float salar_minimo, salario, desconto;
int quant_salar;

  /*Linhas 16 e 19: leêm o valor, respectivamente, do salário mínimo e do salário que a pessoa recebe*/  
    
    printf("Insira o valor do salário mínimo:\n");
    scanf("%f", &salar_minimo);
    
    printf("Insira o valor do seu salário:\n");
    scanf("%f", &salario);
/*Calculando a quantidade de salários minimos "dentro" do salario da pessoa e o desconto referente ao vale transporte*/    
    quant_salar = salario/salar_minimo;
    desconto = 0.08 * salar_minimo;

/*Imprimindo os valores no terminal*/
    printf("A quantidade de salários mínimos que você ganha é: %d \n", quant_salar);
    
    printf("O valor do desconto no seu salário é: %f \n", desconto);
    
    return 0;
}