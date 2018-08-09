#include<stdio.h>
int main(void){
    typedef struct { double x, y; }Point;

    double dist(Point a, Point b)
    {
        return hypot(a.x-b, a.y-b.y)
    }
}
