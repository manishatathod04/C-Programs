 #include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue=='a')
    {
        printf("%c",'A');
    }
    else if(cValue =='D')
    {
        printf("%c",'d');
    }
}
int main ()
{
    char cValue ='\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}

//  a ->A
// D -> d