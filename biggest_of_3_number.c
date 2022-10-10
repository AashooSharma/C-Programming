#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("enter a number 1\n");
    scanf("%d",&num1);
    printf("enter a number 2\n");
    scanf("%d",&num2);
    printf("enter a number 3\n");
    scanf("%d",&num3);
    if ((num1>num2) && (num1>num3))
    {
        printf("%d is bigger\n", num1);
        /* code */
    }
    else if ((num2>num1) && (num2>num3))
    {
        printf("%d is bigger\n", num2);
        /* code */
    }
    else if (num1>num3) // for exepation error fix
    {
        printf("%d is bigger\n", num1);
        /* code */
    }
    
    else
    {
        printf("%d is bigger\n", num3);
    }
    
    
}