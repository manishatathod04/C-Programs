 #include<stdio.h>
  int main()
  {
    char ch= 'A';          //1 bytes
    int i= 11;             //4  bytes
    float no= 3.14f;       //4  bytes
    double d =90.785634;   //8 byte
   
    printf("%c\n",ch);      // \n new line out 
    printf("%d\n",i);
    printf("%f\n",no);
    printf("%lf\n",d);
return 0;
  }