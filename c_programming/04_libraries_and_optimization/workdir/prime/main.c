#include <stdio.h>

#include "prime.h"

int main(void)
{
    unsigned num = 0;
    scanf("%u", &num);

    bool isNumPrime = isPrime(num);
    printf("Is %u prime: %s\n", num, isNumPrime ? "true" : "false");

    return 0;
}
