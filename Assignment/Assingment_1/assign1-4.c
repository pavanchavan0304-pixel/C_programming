#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo/5)==0)
    {
        return true;
    }
    else
    {
      return false;

    }
}



int main()
{
    int iValue=0;
  
    printf("Enter number:\n");
    scanf("%d",&iValue);
   bool iNo=0;
    if((iNo)==0)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");

    }

    return 0;


}