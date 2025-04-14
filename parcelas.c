/**********************************************************************************************************************************
 O objetivo desse programa é mostrar o valor que o consumidor irá pagar dependendo da quantidade de parcelas que ele(a) dividirá
 o valor à vista da compra.
 OBS.: O valor só pode ser dividido até 3 vezes, e se a pessoa dividir o preço aumentará em 10%, se parcelar em 2 vezes, e aumentará
 20%, se dividir em 3 vezes. 
 **********************************************************************************************************************************/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float a_vista, pagamento;
    int parcelas, valor_parcelas;

    printf("Insira o valor à vista da compra:\n");
    scanf("%f", &a_vista);

    printf("Insira a quantidade de vezes que deseja parcelar a compra:\n");
    scanf("%d", &parcelas);

    if (parcelas == 1){

        printf("O valor que você pagará será: %.2f \n", a_vista);
    
    }else if(parcelas == 2){

            pagamento = a_vista +(0.1 * a_vista);
            printf("O valor que você pagará no final será: %.2f \n", pagamento);
        
        }else{
            pagamento = a_vista + (0.2 * a_vista);
            printf("O valor que você pagará no final será: %.2f \n", pagamento);
            }
        
            /*4 parcelas em diante 0.4 + 0.1 de acrescimo*/


            
    return 0;
}



