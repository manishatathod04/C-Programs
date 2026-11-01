#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)

{
    if(iValue >0)
    {
     printf(" It is positive number ");    
    }
    else if (iValue < 0)
    {
        printf("It is  negative number");
    }
    else
    {
        printf(" It is zero");
    }
}


int main()
{
   int iValue =0;

   printf(" Enter a number :");
   scanf("%d",&iValue);

   CheckNumber(iValue);


    return 0;

}