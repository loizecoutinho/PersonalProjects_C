#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int temp;
   printf("Insira a temperatura:\n");
   scanf("%d",& temp);
   
   if (temp <= 30){
       if (temp >=20){
           printf("Temperatura agradável!");
       }
   
    else if(temp <= 19){
       printf("Temperatura Fria!");}
   }
       
    else{
       printf("Temperatura Quente!");
    }
    return 0;
}