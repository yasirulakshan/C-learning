#include<stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct NODE
{
    struct NODE *next;
    char *name;
} node;

typedef struct {
	node *head;
} list;

void addToLst(node* nd,char* str){
    if(nd == NULL){
        node* new = (node*) malloc(sizeof(node));
        new->name = (char* ) malloc(20*sizeof(char));
        strcpy(new->name,str);
        new->next = NULL;
        nd = new;
        return;
    }
    else if(nd->next == NULL){
        node* new = (node*) malloc(sizeof(node));
        new->name = (char* ) malloc(20*sizeof(char));
        strcpy(new->name,str);
        new->next = NULL;
        nd->next = new;
        return;
    }

    else{
        return (addToLst(nd->next,str));
    }
}



int main(){
    char* str = (char* ) malloc(20*sizeof(char));
    list* lst = (list *)malloc(sizeof(lst));
    lst->head = NULL;
    
    while (1){
        scanf("%s",str);
        if (!strcmp(str,"0")){
            break;
        }
        addToLst(&(lst->head),str);
        
    }
    free(str);

    node* printing = malloc(sizeof(node));
    printing = lst->head;
    while(printing!=NULL){
        printf("%s\n",printing->name);
        printing = printing->next;
    }

    free(lst);
    

    return 0;
}