#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;



int main()
{
    Point p1={3,2};
    Point *p2;

    p2= &p1;
    printf("p1: (%d,%d)\n", p1.x,p1.y);
    p2->x= 5;
    p2->y=6;

    printf("p1: (%d,%d)\n", p1.x,p1.y);
    printf("p1: (%d,%d)\n", p2->x,p2->y);

    Point *p3;
    p3= malloc(sizeof(Point));

    p3->x=10;
    p3->y=20;
    printf("p3: (%d,%d)\n", p3->x,p3->y);

    (*p3).x=11;// looks ugly but it works too
    (*p3).y=12;

    printf("p3: (%d,%d)\n", p3->x,p3->y);

    return 0;
}
