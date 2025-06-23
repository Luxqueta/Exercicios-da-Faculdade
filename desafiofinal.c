#include<stdio.h>

void rainhaloop(int r){
    if(r>0){
        
        rainhaloop(r-1);
        printf("se deslocou para a esquerda %d vez(es)\n", r);
        

    }
}


void torreloop(int t){
    if(t>0){
        
        torreloop(t-1);
        printf("se deslocou para a direita %d vez(es)\n", t);
        

    }
}


void bispoloop(int b){
    
    if(b>0){
        
        bispoloop(b-1);
        printf("se deslocou para cima\n" );
        printf("Se deslocou para a esquerda\n");

        

    }
}


int main(){
//rainha
    int bispo, rainha, torre, cavalo;
    printf("Movimento da Rainha:\n");
    rainha=7;
    rainhaloop(rainha);


    //torre
    printf("Movimento Torre:\n");
    torre=5;
    torreloop(torre);

    //bispo
    printf("Movimento Bispo:\n");
    bispo=10;
    bispoloop(bispo);

    //cavalo
    printf("Movimento do Cavalo:\n");

    for (int cavalo=0; cavalo < 2; cavalo++)
    {
        printf("cima\n");
        if (cavalo==1)
        {
            printf("esquerda\n");
            
        }
        
    }
    

}


   

    
    
    


