#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    printf("the values of a is %d and b is %d before swaping\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("the values of a is %d and b is %d after swaping\n", a, b);
}