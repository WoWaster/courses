#include <stdio.h>
int fibonacci(int n, int* result)
{
    if (n <= 0)
        return 1;
    if (n <= 2) {
        *result = 1;
        return 0;
    }
    int previous = 0;
    fibonacci(n - 1, &previous);
    int prePrevious = 0;
    fibonacci(n - 2, &prePrevious);
    *result = previous + prePrevious;
    return 0;
}

int main(void)
{
    int x = 0;
    int result = 0;
    const int errorCode = fibonacci(x, &result);
    if (errorCode != 0)
        printf("Всё очень плохо");
    else
        printf("%d-ое число Фибоначчи равно %d", x, result);
}
