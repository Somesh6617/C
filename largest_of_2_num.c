


#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    result=(num1>num2)?printf("%d is greater",num1):printf("%d is greater",num2);
    return 0;
}
