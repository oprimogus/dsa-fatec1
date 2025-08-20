#include <stdio.h>

void one() {
    long long int input;
    scanf("Digite um número: %lld", &input);
    printf("Número: %lld\n", input);
    printf("Número seguinte: %lld\n", input + 1);
    printf("Número anterior: %lld\n", input - 1);
}
