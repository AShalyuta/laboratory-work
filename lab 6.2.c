#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i,j,m,n,h,k=0,max,max1,g,z,x,a,l,al,*t;
    printf("Kolichestvo strok ");
    scanf("%d", &n);
    printf("Kolichestvo stolbcov ");
    scanf("%d", &m);
    if(!(t=(int*)malloc(n*m*sizeof(int))))
    {
       puts("nedostatochno pamyati"); 
       getch();
       return 0; 
    }
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        printf("vvedite element [%d,%d]\n", i+1,j+1);
        scanf("%d",(t+i*m+j));
    }
    printf("matrica:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%4d",*(t+i*m+j));
        printf("\n");
    }
    for (i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        if(*(t+i*m+j)==0) {k++; h=i; break;}
    }
    for (i=++h;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(*(t+i*m+j)==0) {k++; h=i; break;}
        }
    }
    g=n-k;
    l=i*j;
    for (a=0;a<l;a++)
    {
        for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(*(t+i*m+j)>max) {max=*(t+i*m+j); z=i; x=j;}
        }
        *(t+z*m+x)=0;
        for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(*(t+i*m+j)>max1) {max1=*(t+i*m+j);}
        }
    if(max==max1) {printf("max chislo povtor 2 raza = %d\n",max1); break;}
    max=0;
    max1=0;
    }
    printf("kol-vo strok ne soderj nylevux elementami = %d\n",g);
    free(t);
    return 0;
}
