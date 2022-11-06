#include<stdio.h>

int main()
{
    int num1,num2,num3,max;

    printf("enter the number 1");
    scanf("%d",&num1);

    printf("enter the number 2");
    scanf("%d",&num2);
    
    printf("enter the number 3");
    scanf("%d",&num3);
if (num1>num2)
{
    max=num1;

    if (num1>num3)
    {
        max=num1;
    }
    
    else
    {
        max=num3;
    }
    
}
else
{
    if (num2>num3)
    {
        max=num2;
    }
    else
    {
        max=num3;
    }
    
}
printf("maximun number is%d",max);

    return 0;
}