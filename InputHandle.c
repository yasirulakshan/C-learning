#include<stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct NODE
{
    struct NODE *next;
    char *name;
} node;



int main(){
    char* str = (char* ) malloc(20*sizeof(char));
    //char* y;
    node* nd = (node*) malloc(sizeof(node));
    scanf("%s",str);
    //y = (char* ) malloc(strlen(str)*sizeof(char));
    //strcpy(y,str);
    nd->name = (char* ) malloc(strlen(str)*sizeof(char));
    strcpy(nd->name,str);

    printf("%s\n",nd->name);

    return 0;
}