#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x=0,i,j,n=5,a[5];
    for(i=0;i<5;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        x+=a[i];
    }
    x/=5;
    printf("%d\n",x);
    for(i=0;i<n;i++)
    if(a[i]<x){
        for(j=i+1;j<n;j++)
        a[j-1]=a[j];
        n--;
        i--;
    }
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    return 0;
}
