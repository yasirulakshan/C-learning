#include<stdio.h>
#include <stdlib.h>

void addNum(int* lst, int newNum, int* length){
    *length =  *length+1;
    lst = realloc(lst,*length * sizeof(int));
    lst[*length] = newNum;
}


int main(){
    int* length = malloc(sizeof(int));
    *length = 0;
    int* lst = (int*)malloc(sizeof(int));
    lst[0] = 10;
    addNum(lst,25,length);
    addNum(lst,323,length);
    printf("%d\n",lst[0]);
    printf("%d\n",lst[1]);
    printf("%d\n",lst[2]);
    return 0;
}
