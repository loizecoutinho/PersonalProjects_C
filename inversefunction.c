/* Escreva uma função que receba um número inteiro e retorne o inverso desse número. 
Por exemplo, se a função recebe 1234 deve retornar 4321.*/
#include <stdio.h>
#include <locale.h>

//Criando a funçao:
int inversao(int num){
    //Declarando a variável que armazenará o inverso do numero:
    int inverso = 0;
    /*Utilizando o laço de repetição "while" para percorrer todos os algorismos
    e armazena-los inversamente na variável:*/
    while(num != 0){
     
        int digito =  num % 10;//O resto dessa divisão pegará o ultimo algorismo.
        
        inverso = inverso *10 + digito;//Adiciona o digito.
        
        num = num/ 10;//Remove o ultimo algorismo.
        
    }
    return inverso;
}
//Chamando a função principal:
int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando as variáveis:
    int num, num_inverso;
    
    //Recebendo a info:
    printf("Insira um número inteiro: \n");
    scanf("%d", &num);
    
    //Chamando a função "inversao" e armazenando seu resultado em uma variável:
    num_inverso = inversao(num);
    
    //Imprimindo o resultado:
    printf("%d", num_inverso);

    return 0;
}
