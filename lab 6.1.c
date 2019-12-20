#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int *m,n,i,k,max,p=1,h,g;
printf("vvedite kol-vo elementov massiva");
scanf("%d",&n);
if(!(m=(int*)malloc(n*sizeof(int)))) 
    { 
    puts("nedostatochno pamyati"); 
    getch();
    return 0;
    }
for(i=0;i<n;i++){
    printf("m[%d]=",i+1);
 	scanf("%d",m+i);
    }
for(i=0;i<n;i++)
 printf("%4d",*(m+i));
 k=0;
 for(i=0;i<n;i++){
 	if(k<*(m+i))
 	{
 		k=*(m+i);
 		max=i+1;
 	}
 }
 printf("\n nomer maxsimalnogo elementa massiva %d \n",max);
 for(i=0;i<n;i++){
 	if(*(m+i)==0)
 	{
 	h=i;
 	break;
    }
 }
 for(i=h+1;i<n;i++){
 	if(*(m+i)==0)
 	{
 	g=i;
 	break;
    }
 }
 for(i=h+1;i<g;i++)
 p*=*(m+i);
 printf("proizvedenie elementov massiva megdu 0: %d",p);
 free(m);
	return 0;
}
