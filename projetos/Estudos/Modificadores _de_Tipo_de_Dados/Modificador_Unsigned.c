#include <stdio.h>

int main (){

    int numerosinal = 300000000; // Este valor excede o limite de um int normal
    unsigned int numerosemsinal = 300000000;

    printf("Numero Com Sinal %d\n", numerosinal);
    printf("Numero Sem Sinal %d\n", numerosemsinal);

   return 0;
}