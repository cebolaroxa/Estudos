#include <stdio.h>

int main (){

    int numeronormal = 2147483647; // Valor Maximo de Int
    long int numerogrande = 2147483647;

    printf ("Numero Regular (Int): %d\n", numeronormal);
    printf ("Numero Grande (Long Int): %ld\n", numerogrande);

    numerogrande = 2147483648; // Valor Maior que  maximo de int
    printf ("Numero Grande Atualizado (Long Int): %ld\n", numerogrande);

    return 0;
}