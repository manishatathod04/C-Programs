#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibity(int iAge )

{
    if(iAge<0 )
    {
     printf("Invalid age");    
    }
    else if(iAge >=21)
    {
        printf("  Eligible for voting  ");
    }
    else
    {
        printf("Not Eligible for voting");
    }
    
}

int main()
{
   int iAge =0;
  

   printf(" Enter your number :");
   scanf("%d",&iAge);

  CheckVotingEligibity(iAge);


    return EXIT_SUCCESS;

}