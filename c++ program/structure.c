#include <stdio.h>
#include <math.h>
int main()
{
    float distance;
    struct point
    {
        int x;
        int y;
    };
    struct line
    {
        struct point p1;
        struct point p2;
    };
    struct line l;
    printf("enter the value of x and y for first point");
    scanf("%d%d", &l.p1.x, &l.p1.y);
    printf("enter the value of x and y for second point");
    scanf("%d%d", &l.p2.x, &l.p2.y);
    distance = sqrt(pow((l.p2.x - l.p1.x), 2) + pow((l.p2.y - l.p1.y), 2));
    printf("the distance between the two point is %f", distance);
    return 0;
}