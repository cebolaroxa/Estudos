# include <stdio.h>
int main (){

/* Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

Objetivo:
- Criar cartas representando cidades, contendo as seguintes propriedades:
  - **População**
  - **Área**
  - **PIB**
  - **Número de pontos turísticos***/

 char cidade [4];
 float populacao, area, pib;
 int pontos_turisticos;
 
 printf ("Qual o codigo da sua cidade? Ex[A01,B01...] : \n");
 scanf ("%3s", &cidade);

 printf ("Qual a populacao da sua cidade? Ex[180.000] : \n");
 scanf ("%f", &populacao);

 printf ("Qual a area da sua cidade em Km? Ex[203.000] : \n");
 scanf ("%f", &area);

 printf ("Qual o Pib da sua cidade? Ex[9.97] : \n");
 scanf ("%f", &pib);

 printf ("Quantos pontos turisticos sua cidade possui ? Ex[14] : \n");
 scanf ("%d", &pontos_turisticos);

 printf (" Dados da Cidade\n");
 printf("Sua cidade e a carta: %s\n", cidade);
 printf("Possui uma populacao de: %.2f habitantes\n", populacao);
 printf("Tem uma area total de: %.2f km²\n", area);
 printf("Possui um PIB de: R$ %.2f milhões\n", pib);
 printf("Alem disso ela possui um total de: %d Pontos turísticos\n", pontos_turisticos);

return 0;
}