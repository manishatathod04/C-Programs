#include<stdio.h>
#include<stdlib.h>

void  DisplayGrade(float fMarks)

{
    if(fMarks >=90 && fMarks <=100)
    {
     printf("A Grade");    
    }
    else if(fMarks >=75)
    {
        printf("B Grade");
    }
    else if(fMarks>=60)
    {
        printf("C Grade" );
    }
    else if(fMarks>=40)
    {
        printf(" D Grade");
    }
    else
    {
        printf(" Invalid Marks");
    }
}

int main()
{
   float fMarks =0.0f;
  

   printf(" Enter marks :");
   scanf("%f", &fMarks);

  DisplayGrade(fMarks);


    return EXIT_SUCCESS;

}