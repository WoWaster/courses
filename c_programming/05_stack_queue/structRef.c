#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main(void)
{
    Point p1 = { 10, 20 };
    Point* p = &p1;
    int* test = &(p1.x);
    printf("(%d, %d)\n", p->x, p->y);
    *test = 30;
    printf("(%d, %d)\n", p->x, p->y);
    printf("(%d, %d)\n", p1.x, p1.y);
}
