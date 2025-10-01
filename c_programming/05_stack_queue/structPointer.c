#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int x;
    int y;
} Point;

int main(void)
{
    Point* p = malloc(sizeof(Point));
    if (p == NULL) {
        return 1;
    }
    p->x = 10;
    p->y = 20;
    printf("(%d, %d)", p->x, p->y);
    free(p);

    return 0;
}
