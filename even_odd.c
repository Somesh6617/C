

#include<stdio.h>
int main()
{
    int num,result;
    printf("enter the number : ");
    scanf("%d",&num);
    result=(num%2==0)?printf("%d is even number",num):printf("%d is odd number",num);
    return 0;
}
