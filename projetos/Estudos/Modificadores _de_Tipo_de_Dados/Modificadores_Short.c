#include <stdio.h>

int main (){

    short int numeroPequeno = 32767; //  Valor Maximo de short int
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Valor maior que o maximo de short int
    printf("Numero pequeno atualizado (short int): %d\n", numeroPequeno);

    return 0;

}