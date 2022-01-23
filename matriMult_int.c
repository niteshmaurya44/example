#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 512;

        int i, j, k;
        int a[n][n], b[n][n], M[n][n] ;

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                a[i][j] = rand();
                b[i][j] = rand();
            }
        }
        double time;
        time = clock();        
        for(i=0; i<n; i++) {    
            for(j=0;j<n;j++) {    
                M[i][j]=0;    
                for(k=0;k<n;k++) {    
                    M[i][j]+=a[i][k]*b[k][j];    
                }    
            }    
        }    
        time = clock() - time;
        time = time/CLOCKS_PER_SEC;
        printf("\n");
        printf("   Total CPU time for (N = %d) is %f seconds.",n, time);
    
	return 0;
}

