#include <stdio.h>
 

  int main()
  // Desafio Jogo Super Trunfo - Países
  // Objetivo: Simular cadastro de cartas por meio de entrada e saída de dados.
  
{
    // Variáveis Carta 1
     
     char estado= 'S';
     char codigo[8]= "S01";
     char cidade[25]= "São_Bernardo";
     int populacao= 810729;
     float area= 409.5;
     float pib= 58.200;
     int pontos_turisticos= 40;
     float pib_percapta;
     float densidade_populacional;

    
    
    //Entrada de Dados Carta 1

      printf("Digite os dados das cartas\n");
    
      printf("Estado:\n");
      scanf ("%c", &estado);
    
      printf("Código:\n");
      scanf ("%s", &codigo);
    
      printf("Cidade:\n");
      scanf ("%s", &cidade);

      printf("População:\n");
      scanf ("%d", &populacao);

      printf("Área:\n");
      scanf ("%f", &area);

      printf("PIB:\n");
      scanf ("%f", &pib);

      printf("Pontos Turísticos:\n");
      scanf ("%d", &pontos_turisticos);


    //Calculo PIB PERCAPTA e Densidade Populacional Carta 2

    
        pib_percapta= pib/populacao;
        densidade_populacional=populacao/area;

  
    //Impressão

    printf ("Carta 1:\n");
    printf ("Estado: %c \n",estado);
    printf ("Codigo: %s \n",codigo);
    printf ("Cidade: %s \n",cidade);
    printf ("População:%d \n",populacao);
    printf ("Área:%.1f \n",area);
    printf ("PIB:%.1f \n",pib);
    printf ("Quantidade de Pontos Turísticos:%d\n",pontos_turisticos);
    printf ("PIB Percapta:%f\n",pib_percapta);
    printf ("Densidade Populacional:%f\n",densidade_populacional);
      
 

    // Variáveis Carta 2
     
    
     char estado1= 'B';
     char codigo1[8]= "B01";
     char cidade1[25]= "Itabuna";
     int populacao1= 210000;
     float area1= 401;
     float pib1= 4.200;
     int pontos_turisticos1= 12;
     float pib_percapta1;
     float densidade_populacional1;


     //Entrada de Dados Carta 2

      printf("Digite os dados das cartas\n");
    
      printf("Estado:\n");
      scanf ("%c", &estado1);
    
      printf("Código:\n");
      scanf ("%s", &codigo1);
    
      printf("Cidade:\n");
      scanf ("%s", &cidade1);

      printf("População:\n");
      scanf ("%d", &populacao1);

      printf("Área:\n");
      scanf ("%f", &area1);

      printf("PIB:\n");
      scanf ("%f", &pib1);

      printf("Pontos Turísticos:\n");
      scanf ("%d", &pontos_turisticos1);


    //Calculo PIB PERCAPTA e Densidade Populacional Carta 2


        pib_percapta1= pib1/populacao1;
        densidade_populacional1=populacao1/area1;
    

    //Impressão 
   
   
    printf ("Carta 2:\n");
    printf ("Estado: %c \n",estado1);
    printf ("Codigo: %s \n",codigo1);
    printf ("Cidade: %s \n",cidade1);
    printf ("População:%d \n",populacao1);
    printf ("Área:%.1f \n",area1);
    printf ("PIB:%.1f \n",pib1);
    printf ("Quantidade de Pontos Turísticos:%d\n",pontos_turisticos1);
    printf ("PIB Percapta:%f\n",pib_percapta1);
    printf ("Densidade Populacional:%f\n",densidade_populacional1);

 //Comparação de atributos

  float atributo_pib;            
  float atributo_pibpercapta;
  float atributo_area;
  float atributo_populacao;
  int atributo_pontos_turisticos;
  float atributo_densidade_populacional;

atributo_pib=pib>pib1;
atributo_pibpercapta=pib_percapta>pib_percapta1;
atributo_area=area>area1;
atributo_populacao=populacao>populacao1;
atributo_pontos_turisticos=pontos_turisticos>pontos_turisticos1;
atributo_densidade_populacional=densidade_populacional<densidade_populacional1;

  printf(" Atributos vencedores!\n")
  printf(" PIB vencedora:%f\n",atributo_pib);
  printf("PIB Percapta vencedora:%f\n",atributo_pibpercapta);
  printf("Área vencedora:%f\n",atributo_area);
  printf("População vencedora:%f\n",atributo_populacao);
  printf("Cidade com mais pontos turísticos%d\n",atributo_pontos_turisticos);
  printf("Densidade Populacional vencedora%f\n",atributo_densidade_populacional);


 
  //Variáveis Super Poder
    float super_poder_carta1;
    float super_poder_carta2;
    int resultado_vencedor;


    //Calculo Super Poder
        
        super_poder_carta1=(pib+area+populacao+pontos_turisticos+pib_percapta)-densidade_populacional;
        super_poder_carta2=(pib1+area1+populacao1+pontos_turisticos1+pib_percapta1)-densidade_populacional1;


  printf("Super Poder Carta 1:%f\n",super_poder_carta1);

  printf("Super Poder Carta 2:%f\n",super_poder_carta2);

 //Resultado

  resultado_vencedor=super_poder_carta1>super_poder_carta2;

printf("Carta Vencedora:%d",resultado_vencedor);

  

   return 0;
}
