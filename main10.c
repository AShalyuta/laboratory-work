/*
3.11x1-1.66x2-0.60x3=-0.92;
-1.65x1+1.51x2-0.78x3=2.57;
0.60x1+0.78x2-1.87x3=1.65;
x3=-10.913722;
x2=-15.739813;
x1=-10.802676
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, j, g, s;
    float x, y;
    int n=0, m=0;
    printf("Kolichestvo strok n,Kolichestvo stolbcov=n+1\n");
	printf("n = ");
    scanf("%d", &n);
    m=n+1;
    float b[n+1][m+1];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("vvedite element [%d,%d]\n", i+1,j+1);
        scanf("%f",&b[i][j]);
        }
    }
    printf("matrica:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%.2f",b[i][j]);
        printf("\n");
    }
   for(g=0; g<n; g++){
		y=b[g][g];
		for(i=g, j=0; j<m; j++){
		b[i][j] /= y;
		}
		for(s=g+1; s<n; s++){
			x = -b[s][g];
			for(i=g, j=0; j<m; j++){
			b[s][j] += b[i][j]*x;
			}
		}
	}
	printf("matrica t:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%.2f",b[i][j]);
        printf("\n");
    }
    float t;
    int tn,l,c,h;
    printf("\n");
	t=b[n-1][m-1];
	printf("x%d = %f\n",n,t);
	for(tn=n-1, l=m-2, c=2;l>=0, tn>1, c<=m;l--,tn--, c++){
		for(i=n-c; i>=0; i--){
		b[i][l]*=t;
		}
		if(tn>=1){
			for(h=2; h<=c; h++){
			b[n-c][m-1]-=b[n-c][m-h];
			}
			t=b[n-c][m-1];
			printf("x%d = %f\n",tn,t);
		}
	}
    return 0;
}
