#include<stdio.h>
#include <time.h>
#include <stdint.h>

unsigned long long int fib(int n){
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

int main (){
    double time;
    time = clock();
  for (int i=0; i < 50 ; i++){
        printf("%llu, ", fib(i));
    }

  time = clock() - time;
  time = time/CLOCKS_PER_SEC;
  printf("\n");
  printf("   Total CPU time for 50 numbers is %f seconds.", time);
//   for (int i=50; i < 100 ; i++){
//         printf("%llu, ", fib(i));
//     }
//   time = clock() - time;
//   time = time/CLOCKS_PER_SEC;
//   printf("\n");
//   printf("   Total CPU time for 100 numbers is %f seconds.", time);
  return 0;
}