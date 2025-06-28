#include<stdio.h>
int main(){

float num1, num2, result, histresult[100]; 
int op=0, fin, indice=0;
float histnum1[100], histnum2[100];
printf("###Bem Vindo a calculadora em C###\n");
printf("As operações disponíveis são as seguintes:\n");
printf("1-SOMA 2-SUBTRAÇÃO 3-DIVISÃO 4-MULTIPLICAÇÃO 5-PARA ENCERRAR A CALCULADORA 6-Histórico\n");
printf("Escolha a operação de acordo com o menu: ");
scanf("%d", &op);
fin=op;


while (op<=0||op>=7){

    
    switch (op){
        default:
    printf("A opção escolhida é invalida! Escolha Novamente\n");
    scanf("%d", &op);
    break;
    }

}

while (fin!=5){   

    while (op<=0||op>=7){
        switch (op){
        default:
        printf("A opção escolhida é invalida! Escolha Novamente ou encerre o programa\n");
        scanf("%d", &op);
        fin=op;
        break;}
             }

if (op==6)
{
        printf("As últimas operações feitas foram as seguintes:\n");
        for (int i = 0; i < indice ; i++){
            printf("%.2f com %.2f = %.2f\n", histnum1[i], histnum2[i], histresult[i]);}
}
else{
 
        


if (fin!=5){

    printf("Escolha os dois Números:");
    scanf("%f", &num1);
    scanf("%f", &num2);
    histnum1[indice]=num1;
    histnum2[indice]=num2;
    
    
    switch (op){
        case 1:
        result=num1+num2;
        histresult[indice]=result;
        indice++;
        printf("O resultado da soma de %.2f + %.2f é: %.2f\n", num1, num2, result);
        break;

        case 2:
        result=num1-num2;
        histresult[indice]=result;
        indice++;
        printf("O resultado da subtração de %.2f - %.2f é: %.2f\n", num1, num2, result);
        break;

        case 3:
        
        if (num2==0)
        {
            printf("não é possivel dividir por 0\n");
            break;
        }
        else {

        result=num1/num2;
        histresult[indice]=result;
        indice++;
        printf("O resultado da divisão de %.2f / %.2f é: %.2f\n", num1, num2, result);
        break;}

        case 4:
        result=num1*num2;
        histresult[indice]=result;
        indice++;
        printf("O resultado da multiplicação de %.2f * %.2f é: %.2f\n", num1, num2, result);
        break;
    
        
        }
        
    }}

    printf("Escolha outra operação para continuar ou encerre o programa com '5'\n");
    scanf("%d", &op);
    fin=op;


    }
printf("Saindo do programa...");
    }