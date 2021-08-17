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



int main(){
    char* str = (char* ) malloc(20*sizeof(char));
    list* lst = (list *)malloc(sizeof(lst));
    lst->head = NULL;
    node* going = (node*) malloc(sizeof(node));;
    //lst->head = &going;
    node* temp = (node*) malloc(sizeof(node));
    //temp->name = "dasda";
    //temp->next = NULL;

    //going = temp;
    
    while (1){
        scanf("%s",str);
        if (!strcmp(str,"0")){
            break;
        }
        temp->name = (char*) malloc(20*sizeof(char));
        strcpy(temp->name,str);
        temp->next = NULL;
        if(lst->head == NULL){
            lst->head = temp;
        }
        else{
            
        }
        
    }

    node* printing = malloc(sizeof(node));
    printing = lst->head;
    while(printing==NULL){
        printf("%s\n",printing->name);
        printing = printing->next;
    }

    return 0;
}