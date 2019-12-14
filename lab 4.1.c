#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i,c,a[5];
    for(i=0;i<5;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<4;i++){
        if(a[i]>a[i+1]) c++;
        else c=0;
    }
    printf("%d\n",c);
    if(c>=4) printf("uporyadocheny po ubyvaniyu");
    else printf("ne uporyadocheny");
    return 0;
}