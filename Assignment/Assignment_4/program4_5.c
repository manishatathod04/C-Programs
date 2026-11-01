#include<stdio.h>
#include<stdlib.h>

void CheckDivisiblity(int iValue)

{
    if(iValue%5 ==0 )
    {
     printf(" Divisibile by 5");    
    }
    else 
    {
        printf("Not Divisible by 5");
    }
   
    
}

int main()
{
   int iValue=0;
  

   printf(" Enter your number :");
   scanf("%d",&iValue);

  CheckDivisiblity(iValue);


    return EXIT_SUCCESS;

}