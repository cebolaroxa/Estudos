#include <stdio.h>

int main (){
    /*
    Soma(+)
    Subtração (-)
    Mutiplicação (*)
    Divisão (/)
    */


    int numero1, numero2;
    int soma, subtracao, mutiplicacao, divisao;

    printf("entre com o numero 1\n");
    scanf("%d", &numero1);

    printf("entre com o numero 2\n");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;

    //operação subtração
    subtracao = numero1 - numero2;

    //operação mutiplicação
    mutiplicacao = numero1 * numero2;

    //operação divisão
    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A mutiplicação é: %d\n", mutiplicacao);
    printf("A divisão é: %d\n",divisao);

}