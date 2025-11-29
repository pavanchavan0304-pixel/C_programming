#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iEvenFact=1,iOddFact=1;
    int iCnt=0;

    if(iNo<0)
    iNo=-iNo;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        iEvenFact*=iCnt;
        else
        iOddFact*=iCnt;
    }
    return (iEvenFact-iOddFact);

    
}
int main()
{
    int ivalue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&ivalue);
    iRet=FactorialDiff(ivalue);
    printf("Factorial different is %d",iRet);
    return 0;
}