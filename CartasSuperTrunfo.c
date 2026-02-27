#include <stdio.h>


  int main()
// Jogo Super Trunfo - Estados
//O jogo funciona da seguinte forma: Dois jogadores entrarão com os dados das cartas da qual querem compedir.O sistema fornecerá um menu switch para que o jogador possa escolher dois atributos para competir. O sistema fará a comparação dos dois atributos através de calculos com operadores matemáticos, comparando os dois atributos, um de cada vez.
//O sistema exibirá coforme lógica o ganhador e depois entregará a comparação de todos os atributos e qual a carta mais poderosa.
//A  comparação de todos os atributos e a carta mais poderosa, são apenas para fins informativos e não alteram quem venceu o jogo!
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

int menu_inicial;
printf("Bem Vindo ao Super Trunfo Cidades!\n");
printf(" Pronto para competir ?\n");
printf("Digite 1 para Continuar\n");
printf("Digite 2 para saber as regras do jogo\n");
scanf("%d",&menu_inicial);  

switch (menu_inicial)
{
case 1: 
printf(" ok! Vamos começar. Digite os dados das cartas\n");
break;
case 2:
printf("  O jogo funciona da seguinte forma:\n");
printf("Dois jogadores escolherão cuidadosamente uma cidade para competir. Cada jogador deve escolher uma cidade individualmente;\n");
printf("  Os Jogadores de comum acordo poderão escolher duas características da cidade para competir; \n");
printf(" Serão duas partidas, uma para cada característica.\n");
printf(" O primeiro Jogador a digitar os dados da cidade será denominado JOGADOR 1e o segundo JOGADOR 2;n");
printf(" O jogador que tiver os dois atributos mais fortes vence! Mas atenção! Nem sempre o atributo maior é o mais forte.\n");
printf("  No final será exibido para fins de análise estratégica a comparação de cada característica das cidades juntamente com o SUPER PODER que o ajudará a avaliar a cidade com atributos mais fortes.\n");
printf(" AGORA JÁ SABEMOS AS REGRAS! \n");
printf(" PRONTO PARA COMPETIR?.\n");
printf(" Digite os dados da cidade:\n");



break;
default:
printf (" Opção Inválida! Escolha uma opção entre 1 e 2.\n");
printf("Digite aqui:\n  ");
scanf("  %d",&menu_inicial);  
}
    
      printf(" Estado:\n ");
      scanf (" %c", &estado);
    
      printf(" Código:\n");
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
// Esses são atributos calculados pelo próprio sistema e que agregam valor a carta do jogador!

    
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
      scanf (  " %c", &estado1);
    
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
   
   
    printf ("Carta 2:\n ");
    printf (" Estado: %c \n ",estado1);
    printf (" Codigo: %s \n",codigo1);
    printf ("Cidade: %s \n",cidade1);
    printf ("População:%d \n",populacao1);
    printf ("Área:%.1f \n",area1);
    printf ("PIB:%.1f \n",pib1);
    printf ("Quantidade de Pontos Turísticos:%d\n",pontos_turisticos1);
    printf ("PIB Percapta:%f\n",pib_percapta1);
    printf ("Densidade Populacional:%f\n",densidade_populacional1);

//Este é o menu da qual o jogador escolherá dois atributos, um de cada vez para competir com o jogador rival.
//Nestas variáveis ficarão armazenados os pontos dos jogadores!
int pontos_jogador1= 0;
int pontos_jogador2= 0;
//Início do Menu de Opções.

int opcao1;
int opcao2;
int invalido1= 0;
int invalido2=0;
//Uso do IF para evitar a repetição da opção escolhida.
if(opcao1==opcao2)
{printf(" Você ja escolheu essa opção.Escolha uma opção diferente!\n");}

printf( "ATENÇÃO ! Escolha um atributo para competir!\n");
printf(" DIGITE: \n");
printf("1 para População;\n");
printf("2 para Área;\n");
printf("3 para PIB;\n");
printf( " 4 para Pontos Turísticos;\n");
printf("5 para PIB Percapta;\n");
printf(" 6 para Densidade Populacional;\n");
printf("Digite aqui..........");
scanf("%d", &opcao1);

switch (opcao1){

case 1: 
printf( "Você escolheu População!");
if( populacao>populacao1)
{ printf ( "Jogador 1 ganhou!%d\n");
pontos_jogador1++;}
else
if( populacao==populacao1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;


case 2:
printf( "Você escolheu Área!");
if( area>area1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( area==area1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 3:
printf( "Você escolheu PIB!");
if( pib>pib1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( pib==pib1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 4:
printf( "Você escolheu Pontos Turísticos!");
if( pontos_turisticos>pontos_turisticos1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( pontos_turisticos==pontos_turisticos1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 5:
printf( "Você escolheu PIB Percapta!");
if( pib_percapta>pib_percapta1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( pib_percapta==pib_percapta1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 6:
printf(" Voce escolheu Densidade Populacional!");
if( densidade_populacional<densidade_populacional1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( pib_percapta==pib_percapta1)
{printf("Empate!");}
else { printf("Jogador 2 ganhou! \n");
pontos_jogador2++;}
break;
default: printf("Opção inválida!");
invalido1++;
}


printf( "ATENÇÃO ! Escolha um atributo para competir!\n");
printf(" DIGITE: \n");
printf("1 para População;\n");
printf("2 para Área;\n");
printf("3 para PIB;\n");
printf( " 4 para Pontos Turísticos;\n");
printf("5 para PIB Percapta;\n");
printf(" 6 para Densidade Populacional;\n");
printf("Digite aqui..........");
scanf("%d", &opcao2);

switch (opcao2){

case 1: 
printf( "Você escolheu População!");
if( populacao>populacao1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( populacao==populacao1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;


case 2:
printf( "Você escolheu Área!");
if( area>area1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( area==area1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 3:
printf( "Você escolheu PIB!");
if( pib>pib1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( pib==pib1)
{printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 4:
printf( "Você escolheu Pontos Turísticos!");
if( pontos_turisticos>pontos_turisticos1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( pontos_turisticos==pontos_turisticos1)
{ printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 5:
printf( "Você escolheu PIB Percapta!");
if( pib_percapta>pib_percapta1) 
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else
if( pib_percapta==pib_percapta1)
{ printf("Empate!");}

else { printf("Jogador 2 ganhou!\n");
pontos_jogador2++;}
break;

case 6:
printf(" Você escolheu Densidade Populacional!");
if( densidade_populacional<densidade_populacional1)
{ printf ( "Jogador 1 ganhou!\n");
pontos_jogador1++;}
else  
if(densidade_populacional == densidade_populacional1)
{ printf("Empate!");}
else { printf("Jogador 2 ganhou! \n");
pontos_jogador2++;}
printf("Escolha outro atributo!\n");
break;
default: printf("Opção inválida!\n");
invalido2++; }

 //Lógica para apontar ganhador usando if-else + operador ternário.


if (invalido1 > 0 || invalido2 > 0)
{
    printf("Opções Inválidas! Reinicie o Jogo.\n");
}
else if (pontos_jogador1 == pontos_jogador2)
{
    printf("Empate Geral!\n");
}
else if (pontos_jogador1 > pontos_jogador2)
{
    printf("Jogador 1 Ganhou!\n Código da cidade: %s\n", cidade);
}
else
{
    printf("Jogador 2 Ganhou!\n Código da cidade: %s\n", cidade1);
}
 //Comparação de atributos
//Variáveis para armazenar os atributos
printf("PARA AS PRÓXIMAS JOGADAS!\n");
printf(" Veja uma comparação entre as características(ATRIBUTOS) das cidades e quais os mais fortes!\n");
  float atributo_pib;            
  float atributo_pibpercapta;
  float atributo_area;
  float atributo_populacao;
  int atributo_pontos_turisticos;
  float atributo_densidade_populacional;
//Calculo dos atributos das cartas
atributo_pib=pib>pib1;
atributo_pibpercapta=pib_percapta>pib_percapta1;
atributo_area=area>area1;
atributo_populacao=populacao>populacao1;
atributo_pontos_turisticos=pontos_turisticos>pontos_turisticos1;
atributo_densidade_populacional=densidade_populacional<densidade_populacional1;

  printf(" Atributos vencedores!\n");
  printf(" PIB vencedora:%f\n",atributo_pib);
  printf("PIB Percapta vencedora:%f\n",atributo_pibpercapta);
  printf("Área vencedora:%f\n",atributo_area);
  printf("População vencedora:%f\n",atributo_populacao);
  printf("Cidade com mais pontos turísticos%d\n",atributo_pontos_turisticos);
  printf("Densidade Populacional vencedora%f\n",atributo_densidade_populacional);


//Nessa parte do jogo o sistema entregará qual carta é mais poderosa!
//Variáveis Super Poder
printf(" Com base nas características das cartas veja qual a mais poderosa!\n");
    float super_poder_carta1;
    float super_poder_carta2;
    int resultado_vencedor;

 //Calculo Super Poder
        
super_poder_carta1=(pib+area+populacao+pontos_turisticos+pib_percapta)-densidade_populacional;
super_poder_carta2=(pib1+area1+populacao1+pontos_turisticos1+pib_percapta1)-densidade_populacional1;


 printf("Super Poder Carta 1:%f\n",super_poder_carta1);

 printf("Super Poder Carta 2:%f\n",super_poder_carta2);
 

 if (super_poder_carta1 > super_poder_carta2) {
    printf("A cidade 1 é mais forte!\n");}
 else { printf("A cidade 2 é mais forte!\n");}
printf("Grandes decisões constroem grandes vitórias.");
   return 0;
}
