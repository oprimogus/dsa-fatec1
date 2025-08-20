#include <stdio.h>
#include "one.h"

void one(void) {
    long long int input;
    printf("Digite um número: ");
    scanf("%lld", &input);

    printf("Número: %lld\n", input);
    printf("Número seguinte: %lld\n", input + 1);
    printf("Número anterior: %lld\n", input - 1);
}
