#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a,b,n,i,c;
    printf("vvedite ob'yem c1 and c2\n");
    scanf("%d",&a);
    scanf("%d",&c);
    for(i=1;i<=12;i++){
        a/=2;
        c+=a;
        c/=2;
        a+=c;
    }
    printf("c1= %d\n",a);
    printf("c2= %d",c);
    return 0;
}