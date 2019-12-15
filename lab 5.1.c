#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i,j,m,n,h,k=0,max=0,g,z=0,x=-1,v;
    printf("Kolichestvo strok ");
    scanf("%d", &n);
    printf("Kolichestvo stolbcov ");
    scanf("%d", &m);
    int b[n+1][m+1];
    int a[m+1];
    for(z=0;z<m;z++)
    {
        a[z]=0;
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
	    g=0;
        if (j==x+1)
        {
            for (i=0;i<n;i++)
            {
            if(b[i][j]==b[i+1][j]) {g++;}
            x=j;
            a[j]=g;
            }
        }
    }
    for(z=0;z<m;z++)
    {
    	if (a[z]>max){ max=a[z]; v=z+1; 
		}
	}
	if (max==0) printf("net stolbca v kotorom naxoditcya samaya dlinnaya seriya odinakovyx elementov\n");
	else printf("nomer stolbca v kotorom naxoditcya samaya dlinnaya seriya odinakovyx elementov- %d\n",v);
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
