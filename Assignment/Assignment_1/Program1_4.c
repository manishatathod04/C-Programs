#include<stdio.h>

typedef int BOOL;
#define True 1
#define False 0

int check (int iNo)
{
    if((iNo % 5)==0)
    {
        return True;
    }
    else{
        return False ;
    }
}
int main ()

{
   int iValue=0;
   BOOL bRet =False;

   printf(" Enter number\n");
   scanf("%d", &iValue);

   bRet =check(iValue);

   if(bRet ==True)
   {
    printf(" Divisible by 5");
   }
   else{
    printf(" Not divisible ny 5");
   }
    return 0;
}