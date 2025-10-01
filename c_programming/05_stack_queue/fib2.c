#include <stdio.h>
int fibonacci(int n, int* errorCode)
{
    if (n <= 0) {
        *errorCode = 1;
        return 0;
    }
    *errorCode = 0;
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n - 1, errorCode) + fibonacci(n - 2, errorCode);
}
int main(void)
{
    int x = 0;
    int errorCode = 0;
    const int result = fibonacci(x, &errorCode);
    if (errorCode != 0)
        printf("Всё очень плохо");
    else
        printf("%d-ое число Фибоначчи равно %d", x, result);
}
