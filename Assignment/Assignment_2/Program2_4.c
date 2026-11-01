#include<stdio.h>

void Display (int iNo, int frequency)
{
        int iCnt=0;
          if( iNo<0)
         {
            iNo =-iNo;
         }
          
        for(iCnt=1;iCnt<=frequency;iCnt++)
        {
            printf("%d\t ",iNo);
        }

        
}

 int main()
 {
    int iValue =0;
    int iCount =0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter number");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
 }