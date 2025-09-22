#include "prime.h"

bool isPrime(unsigned num)
{
    bool flag = true;

    for (unsigned i = 2; i < num; i++)
        if (num % i == 0)
            flag = false;

    return flag;
}
