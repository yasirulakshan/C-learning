#include<stdio.h>
int main(){
    int a;
    int b;
    float c;
    float d;

    scanf("%d", &a);
    scanf("%d" , &b);
    scanf("\n");
    scanf("%f", &c);
    scanf("%f", &d);


    int sumi = a + b;
    int differenti = a - b;
    float sumf = c + d;
    float differentf = c - d;

    printf("%d ",sumi);
    printf("%d \n" , differenti );
    printf("%.1f ", sumf);
    printf("%.1f \n" , differentf);

    return 0;

}