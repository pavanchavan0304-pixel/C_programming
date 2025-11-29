#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius=0.0;
    dCelsius=(fTemp-32)*(5.0/9.0);
    return dCelsius;
}
int main()
{
    float fvalue=0.0;
    double dRet=0.0;
    printf("Enter tempeture in Fahrenheit:");
    scanf("%f",&fvalue);
    dRet=FhtoCs(fvalue);
    printf("Tempeture in Celsius is:%.51f",dRet);
    return 0;
}