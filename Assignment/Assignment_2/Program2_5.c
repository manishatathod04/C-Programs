#include<stdio.h>
 #define TRUE 1
 #define FALSE 0

 typedef int bool;

 bool checkEven(int iNo)
 {
 
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue =0;
    bool bRet =0;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet =checkEven(iValue);

    if (bRet ==TRUE)
    {
        printf(" It is a even no.");
    }
    else{
        printf("It is odd no.");

    }


  return 0;

}