#include<stdio.h>

//dynamic function

 void Display(int ifrequency)
 {
    int iCnt=0;
    for( iCnt=1;iCnt<=ifrequency;iCnt++)
    {
        printf("JAY GANESH...\n");
    }


 }
 int main()
 { 
    int iCount=0;
    printf("Enter the frequency: \n");
    scanf("%d",&iCount);


    Display(iCount);

    return 0;
 }