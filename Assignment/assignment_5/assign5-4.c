#include<stdio.h>
void CheckNumbertype(int num)
{
    if (num>0)
    {
        printf("positive number\n");
    }
    else if(num<0)
    {
        printf("negative number\n");
    }
    else
    {
        printf("zero\n");

    }
}
int main()
{
    int number;
    printf("enter number:\n");
    scanf("%d",&number);
    CheckNumbertype(number);
    return 0;
}