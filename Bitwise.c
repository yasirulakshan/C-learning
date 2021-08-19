#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
  for(int a=1;a<=n;a++){
      for(int b=a+1;b<=n;b++){
          int and = a & b;
          int or = a | b;
          int xor = a ^ b;
          if (maxAnd < and && and < k ){
              maxAnd = and;
          }
          if(maxOr < or && or < k){
              maxOr = or;
          }
          if(maxXor < xor && xor < k){
              maxXor = xor;
          }
      }
  }

  printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
