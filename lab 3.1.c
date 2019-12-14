#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int r,m,i=0,p;
    printf("vvedite r and m (r<m)\n");
    scanf("%d",&r);
    scanf("%d",&m);
    while (r<=m)
    {
        i++;
        p=r/100;
        r+=p*4;
    }
    printf("%d let",i);
    return 0;
}