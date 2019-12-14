#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x3,y3,x1,y1,x2,y2,r,a,b,c,g,z;
    printf("Введите x1 и y1\n");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Введите x2 и y2\n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    printf("Введите x3 и y3\n");
    scanf("%f",&x3);
    scanf("%f",&y3);
    a=sqrt(x1*x1+y1*y1);
    c=sqrt(x2*x2+y2*y2);
    b=sqrt(x3*x3+y3*y3);
    if(a<b&&a<c)printf("ближе A");
    else if (c<b) printf("ближе B");
    else printf("ближе C");
    return 0;
}