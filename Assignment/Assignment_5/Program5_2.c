#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)

{
    if(iYear<=0)
    {
      printf(" Invalid ");
    }
     else if(iYear%400==0 )
    {
     printf(" Leap Year");    
    }
    else if(iYear%4==0  && iYear % 100 !=0)
    {
        printf("Leap year");
    }
    else
   {
    printf( "Not a Leap year");
   }
    
}

int main()
{
   int iYear=0;
  

   printf(" Enter year :");
   scanf("%d",&iYear);

  CheckLeapYear(iYear);


    return EXIT_SUCCESS;

}