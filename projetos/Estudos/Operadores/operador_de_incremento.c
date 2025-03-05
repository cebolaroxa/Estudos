#include <stdio.h>
int main (){

    /*Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n",numero1);

    // Numero1 + numero1
    // Numero1 += 1 
    // Pos incremento:
    // Resutado = numero1
    // Numero1++
    resultado = numero1++;
    //printf("Apos incremteno: %d\n, numero1, ");
    printf("Apos Pós-incremento - Numero 1: %d - Resultado: %d\n",numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pre-incremento - Numero 1: %d - Resultado: %d\n",numero1, resultado);
    
      resultado = numero1--;
    printf("Apos Pós-decremento - Numero 1: %d - Resultado: %d\n",numero1, resultado);

    resultado = --numero1;
    printf("Apos Pre-decremento - Numero 1: %d - Resultado: %d\n",numero1, resultado);

}