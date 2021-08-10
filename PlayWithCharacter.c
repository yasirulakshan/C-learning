#include<stdio.h>
int main(){
    char ch;
    char s[50];
    char scn[250];

    scanf("%c" , &ch);
    scanf("%s" , s);
    scanf("\n");
    scanf("%[^\n]%*c" , scn);



    printf("%c \n",ch);
    printf("%s \n" , s);
    printf("%s \n" , scn);

    return 0;
}