#include<stdio.h>

int Addition (int value1, int value2)
{
    int result = 0 ;
    result = value1 + value2;    // business logic
    return result;
}
int main()
{
    int No1 = 10;
    int No2 =11;
    int Ans = 0;

    Ans= Addition (No1 , No2);
    printf("Addition %d\n",Ans);
    return 0;

}
