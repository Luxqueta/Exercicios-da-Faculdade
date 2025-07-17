#include<stdio.h>
#include <ctype.h>
int main(){

    char palavra[25], letra[2], tracos[25];
    int chances=6, menu, acertos=0, erros, tamanho=0, i=0;
    int acerto = 0;

    printf("###Bem vindo ao jogo da forca###\n");
    while (menu!=3){
        
    printf("Selecione uma opção:\n");
    printf("1-JOGAR 2-REGRAS 3-SAIR\n");
    scanf("%d", &menu);
    
    switch (menu){

    case 1:
        printf("Digite a palavra secreta a ser descoberta: ");
        scanf("%s", &palavra);
        palavra[i] = tolower(palavra[i]);


        while (palavra[i] != '\0'){
            i++;
            tamanho++;
            palavra[i] = tolower(palavra[i]); }

        for(int i = 0; i < 25; i++){

            tracos[i]='_';}
        

        while (chances>0&&acertos<tamanho){   
            
            printf("Chances restantes: %d\n", chances);
            printf("A palavra oculta é: ");

                for (int i = 0; i < tamanho; i++){
                 printf("%c", tracos[i]);}

            acerto=0;
            printf("\nDigite sua tentativa de um caractere: ");
            scanf(" %c", &letra[0]);
            while (getchar() != '\n');
            letra[0] = tolower(letra[0]);
            for (int i = 0; i < tamanho; i++){

                if (letra[0]==palavra[i]){   
                    acerto=1;
                    tracos[i]= palavra[i];
                    acertos++;
                    }}


                printf("Acertos:%d ", acertos); 

            if(acerto==0){
                chances--;
                printf("|| Chances restantes: %d\n",chances );
                }
           
             acerto=0;

        }

        if (acertos==tamanho){
            printf("Voce venceu!!\n");
            printf("A palavra secreta era: %s\n", palavra);
            acertos=0;
            }

            else{printf("Voce perdeu!!\n");
            printf("A palavra secreta era: %s\n", palavra);
            acertos=0;}
        
        break;
    
        case 2: 
        printf("Para conmeçar a jogar é necessario 2 jogadores.\n");
        printf("Um deles vai digitar a palavra secreta enquanto o outro tenta adivinha-la.\n");
        printf("O jogador que tentara desvendar a palavra tem 6 chances iniciais. Ganha se acertar todas as letras secretas\n");
        break;

        case 3:
        printf("Saindo...");
        break;

         default:
         printf("A opção digitada é invalida! TENTE NOVAMENTE!\n");
         break;
}

}

}