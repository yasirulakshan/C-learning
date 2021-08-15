#include<stdio.h>
#include <stdlib.h>

void addNum(int* lst, int newNum, int* length){
    length++;
    lst = realloc(lst,10 * sizeof(int));
    lst[*length] = newNum;
}


int main(){
    int* length = (int*)malloc(sizeof(int));
    length[0] = 0;
    int* lst = (int*)malloc(10*sizeof(int));
    lst[0] = 10;
    //addNum(lst,25,length);
    //addNum(lst,323,length);
    printf("%d\n",*length);
    //printf("%d\n",lst[1]);
    //printf("%d\n",lst[2]);
    return 0;
}
