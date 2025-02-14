#include <stdio.h>
#include "stdlib.h"

int main() {


    char cidade;
    char A , B, C;

        printf("Escolha o codigo da sua cidade: [A - B - C]\n");
        scanf("%s", &cidade);
        
//utilizei a tabela ASCII para encontrar os caracteres relacionados aos codigos.
    if (cidade == 65)
    {
        printf(" Sua cidade e Nova Iguacu\n");
    }else if (cidade == 66)
    {
        printf(" Sua cidade e Mesquita\n");
    }else if (cidade == 67)
    {
        printf(" Sua cidade e Nilopolis\n");
    }else {
        printf(" Esta cidade nao existe.\n");
    }

//criei um vetor de 100 caracteres para balancear o nivel das cartas

    int habit = 0;


    printf("Digite a quantidade de habitantes: [maximo de 100]\n");
    scanf("%d", &habit);

    if (habit >= 101)
    {
        printf(" Numero invalido de Habitantes.\n");
    }else
    {
        printf("Uau Sua cidade tem %d habitantes.\n", habit);
    }
    
    

//A área será fixa um valor para cada carta
    float areaNI = 520.8;
    float areaMQ = 19.4;
    float areaNL = 41.2;
    float area = 0.0;

//nome da cidade, população, área e número de pontos turísticos.
  

  if (cidade == 65)//Nova iguaçu
  {
    printf("Sua cidade tem: %.1fm2\n", areaNI);
    area = areaNI;
  }else if (cidade == 66)//Mesquita
  {
    printf("Sua cidade tem: %.1fm2\n", areaMQ);
    area = areaMQ;
  }else if (cidade == 67)//Nilopolis
  {
    printf("Sua cidade tem: %.1fm2\n", areaNL);
    area = areaNL;
  }else{//não existe
    area = 0;
    printf("Sua cidade tem: 0m2\n");
  }
  

  int pontos_turisticos = 0;
  
  printf("Quantos pontos turisticos tem na sua cidade? [maximo - 10]\n");
  scanf("%d", &pontos_turisticos);

//criei um vetor de 10 caracteres para balancear o nivel das cartas
  if (pontos_turisticos >= 11)
  {
      printf("Numero invalido de pontos turisticos.\n");
  }else
  {
      printf("Uau!!! Sua cidade tem %d pontos turisticos.\n\n", pontos_turisticos);
  }



  printf("Parabens suas carta esta registrada!\n");

//nome da cidade, população, área e número de pontos turísticos.

  if (cidade == 65)//Nova iguaçu
  {
    printf("Sua carta e Nova Iguacu, com a populacao de %d habitantes, a area de %.1f, e pontos seus turisticos sao %d.\n\n", habit, areaNI, pontos_turisticos);
  }else if (cidade == 66)//Mesquita
  {
    printf("Sua carta e Mesquita, com a populacao de %d habitantes, a area de %.1f, e pontos seus turisticos sao %d.\n\n", habit, areaMQ, pontos_turisticos);
  }else if (cidade == 67)//Nilopolis
  {
    printf("Sua carta e Nilopolis, com a populacao de %d habitantes, a area de %.1f, e pontos seus turisticos sao %d.\n\n", habit, areaNL, pontos_turisticos);
  }else{//não existe
    printf("Sua cidade nao existe\n\n");
  }
  


  //a maquina

  int popAU = 47;
  float areaAU = 31.3;
  int pontAU = 6;

  printf("a carta do seu adversario e: Austin, e seu total de pontos sao de:\n");
  printf("Austin, com a populacao %d habitantes, a area de %.1fm2, e seus pontos turisticos sao %d.\n\n", pontAU, areaAU, pontAU);


  //resultado

  int pontosJ = 0;
  int pontosM = 0;


//combate 1

  printf("combate 1: [ populacao ]\n\n");

  printf("sua populacao e de: %d habitantes\n", habit);
  printf("a populacao do adversario e de: %d habitantes\n\n", popAU);
 
    if (habit > popAU)
    {
      printf("Voce ganhou!\n\n");
      pontosJ = pontosJ + 1;
    }else if (habit < popAU)
    {
      printf("voce perdeu!\n\n");
      pontosM = pontosM + 1;
    }else if (habit == popAU)
    {
      printf("EMPATE!\n\n");
      pontosM = pontosM + 0;
      pontosJ = pontosJ + 0;
    }
    
    
//combate 2


  printf("combate 2: [ Area ]\n\n");

  if (cidade == 65)//Nova iguaçu
{
      printf("Sua cidade tem: %.1fm2\n", areaNI);
      printf("A cidade adversaria tem: %.1fm2\n\n", areaAU);
      if (areaNI > areaAU)
    {
        printf("Voce ganhou!\n\n");
        pontosJ = pontosJ + 1;
    }else if (areaNI < areaAU)
    {
      printf("voce perdeu!\n\n");
        pontosM = pontosM + 1;

    }else if (areaNI == areaAU)
    {
      printf("EMPATE!\n\n");
      pontosM = pontosM + 0;
      pontosJ = pontosJ + 0;
    }   
}
  
  if (cidade == 66)//Mesquita
  {    printf("Sua cidade tem: %.1fm2\n", areaMQ);
      printf("A cidade adversaria tem: %.1fm2\n\n", areaAU);
      if (areaMQ > areaAU)
    {
        printf("Voce ganhou!\n\n");
        pontosJ = pontosJ + 1;
    }else if (areaMQ < areaAU)
    {
      printf("voce perdeu!\n\n");
      pontosM = pontosM + 1;
    } else if (areaMQ == areaAU)
    {
      printf("EMPATE!\n\n");
      pontosM = pontosM + 0;
      pontosJ = pontosJ + 0;
    }      
  }
  
  
  
  if (cidade == 67)//Nilopolis
  {
    printf("Sua cidade tem: %.1fm2\n", areaNL);
    printf("A cidade adversaria tem: %.1fm2\n\n", areaAU);
    if (areaNL > areaAU)
    {
        printf("Voce ganhou!\n\n");
        pontosJ = pontosJ + 1;
    }else if (areaNL < areaAU)
    {
      printf("voce perdeu!\n\n");
        pontosM = pontosM + 1;
    }else if (areaNL == areaAU)
    {
      printf("EMPATE!\n\n");
      pontosM = pontosM + 0;
      pontosJ = pontosJ + 0;
    }  
       
  }
  
//combate 3

  printf("combate 3: [ pontos turisticos ]\n\n");


  printf("seus pontos turisticos sao: %d\n", pontos_turisticos);
  printf("os do adversario sao: %d\n\n", pontAU);
 
    if (pontos_turisticos > pontAU)
    {
      printf("Voce ganhou!\n\n");
      pontosJ = pontosJ + 1;
    }else if (pontos_turisticos < pontAU)
    {
      printf("voce perdeu!\n\n");
      pontosM = pontosM + 1;
    }else if (pontos_turisticos == pontAU)
    {
      printf("EMPATE!\n\n");
      pontosM = pontosM + 0;
      pontosJ = pontosJ + 0;
    }
        

    printf("[calculando pontos...]\n\n");

    //calculando pontos

    printf("O total de pontos do jogador sao de: %d pontos\n", pontosJ);
    printf("E o total de pontos do adversario sao de: %d pontos\n\n", pontosM);
    
    if (pontosJ > pontosM)
    {
      printf("VOCE VENCEU O DESAFIO!!! PARABENS!!!");
    }else if (pontosJ < pontosM)
    {
      printf("VOCE FOI DERROTADO!!! TENTE NOVAMENTE!!!");
    }else if (pontosJ == pontosM)
    {
      printf("!EMPATE!");
    }
    
    return 0;
}
