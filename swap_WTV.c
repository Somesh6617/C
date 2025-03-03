
#include<stdio.h>
int main()
{
    int a,b,add;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("before swapping the numbers are %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the numbers are %d and %d",a,b);
    return 0;
}
