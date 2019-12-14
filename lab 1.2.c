#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x=4000,y=-0.875,z=0.000475,a,b,c,d,g,s;
    a=fabs(cos(x)-cos(y));
    b=1+2*sin(y)*sin(y);
    c=1+z+z*z/2+z*z*z/3+z*z*z*z/4;
    d=pow(a,b);
    s=d*c;
    printf("%f",s);
    return 0;
}