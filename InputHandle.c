#include<stdio.h>
#include <stdlib.h>


typedef struct NODE
{
    strct NODE *next;
    char *name;
};



int main(){
    char * str = (char * ) malloc(20*sizeof(char));
    scanf("%s",str);

    char  = str;  

    printf("%s\n",str);

    return 0;
}