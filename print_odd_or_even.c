#include <stdio.h>
int main(){
    int i;
    printf("enter a number\n");
    scanf("%d",&i);
    if (i%2==0)
    {
        printf("the number %d is even",i);
        /* code */
    }
    else
    {
        printf("the number %d is odd",i);
    }
    printf("\n");
}