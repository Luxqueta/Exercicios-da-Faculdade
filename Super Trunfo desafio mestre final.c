#include<stdio.h>

 int main(){
        
        int população, turismo, atributo, atributo2, resultado;
        char cidade[21];
        float area, pib, densidade, percapita;

        int população2, turismo2;
        char cidade2[21];
        float area2, pib2, densidade2, percapita2;
    printf("###Bem Vindo ao jogo Super Trunfo###\n\n");

        printf("Escolha o primeiro atributo de comparação:\n ");


        printf("1- Nome do pais\n");
        printf("2- População\n");
        printf("3- Área\n");
        printf("4- Pib\n");
        printf("5- Pontos Turísticos\n");
        printf("6- Densidade Demográfica\n");
        scanf("%d", &atributo);

        switch (atributo){
case 1:
    
    printf("O primeiro atributo escolhido foi nome do pais\n");
    printf("Escolha o segundo atributo de comparação:\n ");

     printf("2- População\n");
        printf("3- Área\n");
        printf("4- Pib\n");
        printf("5- Pontos Turísticos\n");
        printf("6- Densidade Demográfica\n");
        scanf("%d", &atributo2);
    break;

    case 2:
    
    printf("O primeiro atributo escolhido foi População\n");
    printf("Escolha o segundo atributo de comparação:\n ");
    printf("1- Nome do país\n");
        printf("3- Área\n");
        printf("4- Pib\n");
        printf("5- Pontos Turísticos\n");
        printf("6- Densidade Demográfica\n");
        scanf("%d", &atributo2);

    break;

    case 3:
   printf("O primeiro atributo escolhido foi Área\n");
    printf("Escolha o segundo atributo de comparação:\n ");

        printf("1- Nome do país\n");
        printf("2- População\n");
        printf("4- Pib\n");
        printf("5- Pontos Turísticos\n");
        printf("6- Densidade Demográfica\n");
        scanf("%d", &atributo2);

    break;

    case 4:
   printf("O primeiro atributo escolhido foi Pib\n");
    printf("Escolha o segundo atributo de comparação:\n ");

        printf("1- Nome do país\n");
        printf("2- População\n");
        printf("3- Área\n");
        printf("5- Pontos Turísticos\n");
        printf("6- Densidade Demográfica\n");
        scanf("%d", &atributo2);
    break;

    case 5:
     printf("O primeiro atributo escolhido foi Pontos Turísicos\n");
    printf("Escolha o segundo atributo de comparação:\n ");

        printf("1- Nome do país\n");
        printf("2- População\n");
        printf("3- Área\n");
        printf("4- Pib\n");
        printf("6- Densidade Demográfica\n");
        scanf("%d", &atributo2);
    break;

    case 6:

      printf("O primeiro atributo escolhido foi Densidade Demográfica\n");
    printf("Escolha o segundo atributo de comparação:\n ");

        printf("1- Nome do país\n");
        printf("2- População\n");
        printf("3- Área\n");
        printf("4- Pib\n");
        printf("5- Pontos Turísticos\n");
        scanf("%d", &atributo2);
    break;

    default:
    printf("opção invqalida!!");
    return 0;
    break;
        }

        if (atributo2 == atributo) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }
    
       
    
    switch (atributo2){
case 1:
    printf("O Segundo atributo escolhido foi nome do pais\n");
    
    break;

    case 2:
    printf("O segundo atributo escolhido foi População\n");
    break;
    

    case 3:
   printf("O segundo atributo escolhido foi Área\n");
  
    break;

    case 4:
    printf("O segundo atributo escolhido foi Pib\n");
    
    break;

    case 5:
    printf("O segundo atributo escolhido foi Pontos Turísicos\n");
   
    break;
    case 6:

   printf("O segundo atributo escolhido foi Densidade Demográfica\n");
   break;

    default:
    printf("opção invqalida!!");
    return 0;
    break;
}


 /* aqui e leitura carta 1*/
        
    

        printf("Digite o nome do pais: ");
        scanf("%20s", &cidade);

        printf("Informe a população: ");
        scanf("%d", &população);

        printf("Informa a área: ");
        scanf("%f", &area);

        printf("Informe o PIB: ");
        scanf("%f", &pib);

        printf("Informe os número de pontos turísticos: ");
        scanf("%d", &turismo);

        densidade=população/area;
        percapita=pib/população;



        /* aqui e leitura carta 2*/


        printf("Digite o nome do país 2: ");
        scanf("%20s", &cidade2);

        printf("Informe a população 2: ");
        scanf("%d", &população2);

        printf("Informa a área 2: ");
        scanf("%f", &area2);

        printf("Informe o PIB 2: ");
        scanf("%f", &pib2);

        printf("Informe os número de pontos turísticos 2: ");
        scanf("%d", &turismo2);

        densidade2=(população2/area2);
        percapita2=(pib2/população2);




        /* aqui e a carta 1*/

        printf("\nCarta1:\n\n");


        printf("Nome do páis: %s\n\n", cidade);

        printf("População: %d\n\n", população);

        printf("Área: %.2f km²\n\n", area);

        printf("PIB: %.2f\n\n", pib);

        printf("Número de pontos Turísticos: %d\n\n", turismo);

        printf("Densidade da Popução: %f\n\n", densidade);

        printf("Pib per Capita: %f\n\n", percapita);

    /* aqui e a carta 2*/


      printf("Carta2:\n\n\n");

        printf("Nome do país: %s\n\n", cidade2);

        printf("População: %d\n\n", população2);

        printf("Área: %.2f km²\n\n", area2);

        printf("PIB: %.2f\n\n", pib2);

        printf("Número de pontos Turísticos: %d\n\n", turismo2);

        printf("Densidade da Popução: %f\n\n", densidade2);

        printf("Pib per Capita: %f\n\n", percapita2);


        printf("Resultado: %s x %s \n", cidade, cidade2);


          
        
        
        int valor1a=0, valor2a=0, valor1b=0, valor2b=0;

          switch (atributo){ 

            case 1:
            printf("Nome dos paises são: %s e %s\n ##mas esse atributo não infere na soma##\n", cidade, cidade2);
            break;

          case 2:
        printf("\nPopulação 1: %d x População 2: %d\n", população, população2);
         if (população>população2){
           valor1a++;
                                }
    else{

        valor2a++;

        }
       

        break;


        case 3:
        printf("\nÁrea 1: %.2f x Área 2: %.2f\n", area, area2);
         if (area>area2){
           valor1a++;
                                }
    else {

        valor2a++;

        }
        




            case 4:
        printf("\nPib 1: %.2f x Pib 2: %.2f\n", pib, pib2);
         if (pib>pib2){
           valor1a++;
                                }
    else{

        valor2a++;

        }
        

break;


        case 5:
        printf("\nPonto turístico 1: %d x Ponto turístico 2: %d\n", turismo, turismo2);
         if (turismo>turismo2){
           valor1a++;
                                }
    else {

        valor2a++;

        }
     

break;

        case 6:
        printf("\nDensidade 1: %.2f x Densidade 2: %.2f\n", densidade, densidade2);
         if (densidade>densidade2){
           valor1a++;
                                }
    else {

        valor2a++;

        }
       
        
            break;
    }





          switch (atributo2){ 
            case 1:
            printf("Nome dos paises são: %s e %s\n ##mas esse atributo não infere na soma##\n", cidade, cidade2);
            break;

          case 2:
        printf("\nPopulação 1: %d x População 2: %d\n", população, população2);
         if (população>população2){
           valor1b++;
                                }
    else {

        valor2b++;

        }
       
        


        case 3:
        printf("\nÁrea 1: %.2f x Área 2: %.2f\n", area, area2);
         if (area>area2){
           valor1b++;
                                }
    else {

        valor2b++;

        }
        
break;

            case 4:
        printf("\nPib 1: %.2f x Pib 2: %.2f\n", pib, pib2);
         if (pib>pib2){
           valor1b++;
                                }
    else {

        valor2b++;

        }
       

        break;


        case 5:
        printf("\nPonto turístico 1: %d x Ponto turístico 2: %d\n", turismo, turismo2);
         if (turismo>turismo2){
           valor1b++;
                                }
    else {

        valor2b++;

        }
       
        break;


        case 6:
        printf("\nDensidade 1: %.2f x Densidade 2: %.2f\n", densidade, densidade2);
         if (densidade>densidade2){
           valor1b++;
                                }
    else {

        valor2b++;

        }
      
        
            break;
          }



          int resultadocid1, resultadocid2, resultadofin;

          resultadocid1= valor1a+valor1b;
          resultadocid2= valor2a+valor2b;

          printf("A soma dos atributos da cidade1: %d + %d\n", valor1a, valor1b);
          printf("A soma dos atributos da cidade2: %d + %d\n", valor2a, valor2b);
          
          (resultadocid1 > resultadocid2) ?  printf("%s ganhou o jogo\n", cidade) :  (resultadocid1 < resultadocid2) ? 
           printf("%s ganhou o jogo\n", cidade2) : printf("As cidades empataram\n");
          
    
          }
