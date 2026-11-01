#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)

{
    if(iValue%2==0 )
    {
     printf(" It is even number ");    
    }
    else 
    {
        printf("It is  odd number");
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