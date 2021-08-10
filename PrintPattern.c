#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    

int main() 
{

    int n;
    scanf("%d", &n);
  	for (int i=0;i<n+n-1;i++){
          int print = n;
          if (i<n){
              for (int j=0;j<n+n-1;j++){
                if (print>n-i && j != 0 && j<=n){
                    print--;
                }
                else if (j>n-1 && i >  2*n-2 - j){
                    print++;
                }
                printf("%d ",print);
              }
          }

          else{
              for (int j=0;j<2*n-1;j++){
                  if (print>n-(2*n-2-i) && j != 0 && j<=n){
                      print--;
                  }

                  else if(j>n-1 && (2*n-2-i)> 2*n-2-j){
                      print++;
                  }
                  printf("%d ",print);
              }
          }
          printf("\n");
    }
          
    return 0;
}