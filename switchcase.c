#include <stdio.h>

int main ()
{
     int std =0;

     printf("Enter your std");
     scanf("%d",& std);

   switch (std)
   {
    case 1:
      printf("9:30");
      break;
     case 2:
      printf("10:30");
      break;
     case 3:
      printf("11:30"); 
      break;
     default:
       printf("Invalid");

   }



    return 0;
}