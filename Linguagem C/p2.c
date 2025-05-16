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
    /*Declarando as variáveis*/
    float a_vista, pagamento;
    int parcelas;
    /*Receber o valor da compra*/
    printf("Insira o valor à vista da compra:\n");
    scanf("%f", &a_vista);
    
    /*Receber*/
    do{
    
    printf("Insira a quantidade de vezes que deseja parcelar a compra:\n");
    scanf("%d", &parcelas);

    switch (parcelas)
    {
    case 1:

        printf("Você pagará o valor à vista: %.2f \n", a_vista);
        
        break;
    case 2:

        pagamento = a_vista + (0.1 * a_vista);
        printf("O valor final que você pagará será: %.2f \n", pagamento);
    
        break;
    case 3:

        pagamento = a_vista + (0.2 * a_vista);
        printf("O valor que você pagará será: %.2f \n", pagamento);
    
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:

        pagamento = a_vista + (a_vista * 0.1 * parcelas);
        printf("O valor que você pagrá será: %.2f \n", pagamento);
    
        break;
    
    default:
        printf("Erro no cálculo das parcelas \n");
        break;
    }
}while(parcelas == 0 || parcelas > 8);
    return 0;
}



