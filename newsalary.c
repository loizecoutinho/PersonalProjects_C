#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    
    setlocale(LC_ALL, "portuguese");
    //Declarando as variáveis:
    float salario, novo_salario, diferenca;
    char *cargo;
    int i, e=1;
    
    //Coletando infos:
    printf("Insira quantos funcionários utilizarão o programa: \n");
    scanf("%d", &i);
    
    //Utilizando o "enquanto" como estrutura de repetição:
    while(e <= i){

        //Coletando infos:
        printf("Insira o valor do seu salário atual: \n");
        scanf("%f", &salario);
        
        printf("Insira o nome  do seu cargo: \n");
        scanf("%s", cargo);
        
        //Teste com "if-else":
        if( strcmp(cargo, "Gerente")==0 || strcmp(cargo, "gerente")==0 ){
            novo_salario = 1.1 * salario;
        }else if( strcmp(cargo, "Engenheiro")==0 || strcmp(cargo, "engenheiro")==0 ){
            novo_salario = 1.2 * salario;
        }else{
            novo_salario = 1.4 * salario;
        }
        
        //Calculando a diferença:
        diferenca = novo_salario - salario;
        
        //Exibindo as infos:
        printf("Seu salario antigo era: R$%.2f \n", salario);
        printf("Seu novo salário é: R$%.2f \n", novo_salario);
        printf("E a diferença entre os dois é: R$%.2f \n", diferenca);

        //Implementação:
        e++;
        
    }
    return 0;
}