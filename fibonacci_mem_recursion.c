#include<stdio.h>
#include <time.h>
#include <stdint.h>
unsigned long long int A[101];

unsigned long long int fib(int n){
   if (n <= 1 )
      return A[n];
    else if (A[n] > 1 ){
        return A[n];
    }
   A[n] = fib(n-1) + fib(n-2);
   return A[n];
}

int main (){
    double time;
    time = clock();
    A[0] = 0;
    A[1] = 1;
  for (int i=0; i < 100 ; i++){
        A[i+2] = 0;
        printf("%llu, ", fib(i));
    }
  time = clock() - time;
  time = time/CLOCKS_PER_SEC;
  printf("\n");
  printf("   Total CPU time for calculating first 100 Fibonacci numbers is %f seconds.", time);
  return 0;
}