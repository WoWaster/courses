#include <stdio.h>

void value_incrementer(int in_value) { in_value += 1; }

void pointer_incrementer(int *in_value) { *in_value += 1; }

int main(int argc, char **argv) {
    int val = 34;
    int *pointer_to_val = &val;

    value_incrementer(val);
    printf("val %d\n", val);

    pointer_incrementer(pointer_to_val);
    printf("val %d\n", val);

    return 0;
}
