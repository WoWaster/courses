#include <stdio.h>

void display_abs(int input_value) {
    if (input_value < 0) {
        int tmp_value;
        tmp_value = -input_value;
        printf("displaying %d\n", tmp_value);
    } else { printf("displaying %d\n", input_value); }
}

int main() {
    display_abs(-3);
    display_abs(8);
    return 0;
}
