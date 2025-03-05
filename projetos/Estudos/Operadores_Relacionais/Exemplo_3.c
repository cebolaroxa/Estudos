#include <stdio.h>

int main (){

    int x = 5;
    int y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("o valor ASCII de %c é %d: \n", c, c);

    return 0;

}