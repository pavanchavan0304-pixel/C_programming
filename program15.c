 ///////////////////////////////////////////
 //
 // Required header files
 //
 //
 ////////////////////////////////////////////  
   
   
   
   
   
   
   
   
   
   
#include<stdio.h>
#include<stdbool.h>



////////////////////////////////////////////  
//function name:checkEvenOdd
//discription:use to chrck even or odd
//Input:11
//output:11 is even number
//author:pavan sakharam chavan
//Date:
//
////////////////////////////////////////////  

bool CheckEvenOdd(int iNo)

{
   int iRam=0;
   iRam=iNo%2;
   
   
    if((iNo%2)==0)
    {
       return true;
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////  
//
// Entry point function of the application
//
////////////////////////////////////////////  
    int main()
 {
    int iValue=0;
    bool bRet=false;

    printf("Enter number :");
    scanf("%d",&iValue);


     bRet=CheckEvenOdd(iValue);

     printf("Result is:%d\n",bRet);
     
     if(bRet==true)
     {
        printf("%d is even number\n",iValue);
     }
     else
     {
        printf("%d is odd number\n",iValue);
     }
     
    return 0;
 }