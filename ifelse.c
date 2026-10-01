#include <stdio.h>

int main()
{
   int std =0;
    printf ("Enter your std");
    scanf("%d",&std);

    if(std ==1)
    {
        printf("9:30 AM");
    }
    else if(std==2)
    {
        printf("10:30 AM");
    }
    else if (std ==3)
    {
        printf("11:30");
    }
    else 
    {
        printf("Invalid");
    }
   return 0;
}
