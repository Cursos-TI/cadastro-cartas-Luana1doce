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
     double pib= 58.200;
     int pontos_turisticos= 40;
    
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
  
    //Impressão

    printf ("Carta 1:\n");
    printf ("Estado: %c \n",estado);
    printf ("Codigo: %s \n",codigo);
    printf ("Cidade: %s \n",cidade);
    printf ("População:%d \n",populacao);
    printf ("Área:%.1f \n",area);
    printf ("PIB:%.1f \n",pib);
    printf ("Quantidade de Pontos Turísticos:%d\n",pontos_turisticos);
      
    // Variáveis Carta 2
     
    
     char estado1= 'B';
     char codigo1[8]= "B01";
     char cidade1[25]= "Itabuna";
     int populacao1= 210000;
     float area1= 401;
     double pib1= 4.200;
     int pontos_turisticos1= 12;

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
      scanf ("%.1f", &area1);

      printf("PIB:\n");
      scanf ("%.1f", &pib1);

      printf("Pontos Turísticos:\n");
      scanf ("%d", &pontos_turisticos1);
    
    //Impressão 
   
   
    printf ("Carta 2:\n");
    printf ("Estado: %c \n",estado1);
    printf ("Codigo: %s \n",codigo1);
    printf ("Cidade: %s \n",cidade1);
    printf ("População:%d \n",populacao1);
    printf ("Área:%.1f \n",area1);
    printf ("PIB:%.1f \n",pib1);
    printf ("Quantidade de Pontos Turísticos:%d\n",pontos_turisticos1);

   return 0;
}

