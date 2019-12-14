#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i,j,m,n,h,k=0,max,max1,g,z,x,a,l,al;
    printf("Kolichestvo strok ");
    scanf("%d", &n);
    printf("Kolichestvo stolbcov ");
    scanf("%d", &m);
    int b[n+1][m+1];
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        printf("vvedite element [%d,%d]\n", i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    printf("matrica:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%4d",b[i][j]);
        printf("\n");
    }
    for (i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        if(b[i][j]==0) {k++; h=i; break;}
    }
    for (i=++h;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i][j]==0) {k++; h=i; break;}
        }
    }
    g=n-k;
    l=i*j;
    for (a=0;a<l;a++)
    {
        for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(b[i][j]>max) {max=b[i][j]; z=i+1; x=j+1;}
        }
        b[z-1][x-1]=0;
        for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(b[i][j]>max1) {max1=b[i][j]; z=i+1; x=j+1;}
        }
    if(max==max1) {printf("max chislo= %d\n",max1); break;}
    max=0;
    max1=0;
    }
    printf("kol-vo strok ne soderj nylevux elementami= %d\n",g);
    return 0;
}
