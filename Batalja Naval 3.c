#include<stdio.h>
#define LINHAS 10
#define COLUNAS 10
int main(){
    int tabuleiro[LINHAS][COLUNAS]={0};
   char coluna[10]={'A','B','C','D','E','F','G','H','I','J'};
    printf("###Jogo de Batalha Naval###\n");
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
       printf("%c ", coluna[i]);
    }
 
 printf("\n");


// cruz
 for (int i = 0; i < 10; i++) {         
        for (int j = 0; j < 10; j++) {     

            
            if ((i>=0 && i<=5 && j==2) || (i==2 && j>=0 && j<=4)) {
                tabuleiro[i][j] = 1;
            }
        }
    }


    //cone
    
     for (int i = 0; i < 10; i++) {         
        for (int j = 0; j < 10; j++) {  

            if ((j>=0&&j<=4&&i==9)||(j>0&&j<4&&i==8)||(i==7&&j==2)){
                tabuleiro[i][j]=1;
            }
            

        }   
    
    }


// octaedro
for (int i = 0; i < 10; i++) {         
        for (int j = 0; j < 10; j++) {


if ((i==6&&j>=5)||(i==5&&j>=6&&j<=8)||(i==4&&j==7)||(i==7&&j>=6&&j<=8)||(i==8&&j==7))
{
     tabuleiro[i][j]=1;
}





        }
    
    }



    for (int i = 0; i < 10; i++)
    {
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    



}