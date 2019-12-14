#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i,j,m,n,h,k=0,max=0,g,z=0,x;
    printf("Kolichestvo strok ");
    scanf("%d", &n);
    printf("Kolichestvo stolbcov ");
    scanf("%d", &m);
    int b[n+1][m+1];
    int a[1][m+1];
    for(z=0;z<m;z++)
    {
        a[0][z]=0;
    }
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        printf("vvedite element [%d,%d]\n", i+1,j+1);
        scanf("%d",&b[i][j]);
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
    for(j=0;j<m;j++)
    {
        for (i=0;i<n;i++)
        {
            if(b[i][j]==b[i+1][j]&&j==0) {a[0][j]+=1; x=j;}
        }
    }
    for(j=x+1;j<m;j++)
    {
        for (i=0;i<n;i++)
        {
            if(b[i][j]==b[i+1][j]&&j==x+1) {a[0][j]+=1; x=j;}
        }
    }
    for(z=0;z<m;z++)
    {
        printf("%d",a[0][z]);
    }
    printf("max= %d\n",g);
    printf("kol-vo strok s nylevumi elementami= %d\n",k);
    printf("matrica:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%4d",b[i][j]);
        printf("\n");
    }
    return 0;
}
