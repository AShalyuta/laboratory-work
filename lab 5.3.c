#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
int i,j,n,m,s=0,g=0,k,h;
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
for(i=0;i<n;i++)
{
   g=0;
   for(j=1;j<m;j++)
   {
       if (b[i][j]<b[i][j-1]){g++;}  
    }
if(g==m-1){h=i;break;}  
 }
for(i=h;i==h;i++){
for(j=0;j<m;j++){
for(k=j+1;k<m;k++)
{
s=b[i][j];
b[i][j]=b[i][k];
b[i][k]=s;
}
}
 }
printf("nomer pervoy stroki gde elementy raspolozheny po ubyvaniyu  %d\n",h+1);
printf("matrica uporyadochennayu:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%4d",b[i][j]);
        printf("\n");
    }
return 0;
}
