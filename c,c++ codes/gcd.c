#include<stdio.h>
int gcd(int a,int b)
{
  int a,b,i,g=1;
  for(i=1;i<=a;i++)
  {
   if(a%i==0)
   {
       if(b%i==0)
       g=g*i;

   }
  }
  return g;
}
