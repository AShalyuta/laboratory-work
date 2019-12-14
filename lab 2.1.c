#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x,y,x1,y1,x2,y2,r,a,b,c,g,z;
    printf("Введите x и y\n");
    scanf("%f",&x);
    scanf("%f",&y);
    printf("Введите x1 и y1\n");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Введите x2 и y2\n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    b=(x1-x)*(x1-x);
    c=(y1-y)*(y1-y);
    a=b+c;
    r=(x2-x)*(x2-x);
    z=(y2-y)*(y2-y);
    g=r+z;
    if(a>=g)printf("принадлежит");
    else printf("не принадлежит");
    return 0;
}
