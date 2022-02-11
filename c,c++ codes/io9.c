#include<stdio.h>
void main()
{
  float a,b;
  printf("enter the basic salary...");
  scanf("%f",&a);
  b=(a+(a*60/100)+(a*15/100));
  printf("%f is the gross salary ",b);
}
