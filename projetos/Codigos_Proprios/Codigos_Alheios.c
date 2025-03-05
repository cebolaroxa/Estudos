#include <stdio.h>



int main(){

  char Estado;

  char codigodacarta[3];

  char nomedacidade[30];

  int populaçao;

  float area;

  float PIB;

  int numerodepontosturisticos;



  printf("Qual Estado: ");

  scanf(" %c", &Estado);



  printf("Qual o Código da Cidade: ");

  scanf("%s", &codigodacarta);



  printf("Qual o nome da Cidade: ");

  scanf("%s", &nomedacidade);



  printf("Qual a população da Cidade: ");

  scanf("%d", &populaçao);



  printf("Qual a Área da Cidade em km²: ");

  scanf("%f", &area);



  printf("Qual o PIB da Cidade: ");

  scanf("%f", &PIB);



  printf("Quantos pontos Turísticos tem a Cidade: ");

  scanf("%d", &numerodepontosturisticos);



  printf("Estado: %c\n", Estado);

  printf("Código: %s\n", codigodacarta);

  printf("Nome da Cidade: %s\n", nomedacidade);

  printf("Populção: %d\n", populaçao);

  printf("Área: %.2f km²\n", area);

  printf("PIB: %.2f bilhões de reais\n", PIB);

  printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos);



  return 0;

}