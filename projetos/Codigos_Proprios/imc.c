#include <stdio.h>
int main (){


    float peso, altura, resultado;

    printf(" Qual o seu peso (kg)?\n");
    scanf("%f", &peso);

    printf(" Qual a sua altura (m)?\n");
    scanf("%f", &altura);

    resultado = peso / (altura * altura );

    printf("seu IMC é de: %.2f\n", resultado);

} 