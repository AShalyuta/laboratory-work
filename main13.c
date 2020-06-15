#include <stdlib.h>
#include <stdio.h>

int main()
{
	int A[9] = {1,2,3,3,4,6,7,8,9};
	int B[4] = {2,4,5,7};
	int C[13]={};
	int i,j,n=13,g;
	for( i=0; i<9; i++){
		C[i]=A[i];
	}
    for( i=9, j=0; i<n, j<4; i++, j++){
		C[i]=B[j];
	}
	for(i=0;i<n;i++){
        for( j=i+1; j<n; j++){
            if(C[i]==C[j]){
                for(g=i+1;g<n;g++){
                C[g-1]=C[g];
                }
                n--;
                i--;
            }
        }
    }
	int t=0;
	for( i=0; i<n; i++){
		if(i==n-1)
			break;
		for( j=i+1; j<n; j++){
			if(C[j]>C[i]){
				t=C[i];
				C[i]=C[j];
				C[j]=t;
			}
	    }
	}
	for( i=0; i<n; i++){
		printf("  %d", C[i]);
	}
	return 0;
}
