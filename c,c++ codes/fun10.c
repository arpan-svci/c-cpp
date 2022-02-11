#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,task1,task2,count=0,count1=0;
    char str[50],s[5]={'a','e','i','o','u'};
    printf("enter the string....");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;i<(count-1);i++)
    {
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      {
       task1=1;
      }

        if(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
        {
        task2=1;
        }
        if(task1==task2)
        count1++;
        task1=4;task2=3;
    }
    printf("no of consecutive 2 vowels is %d ",count1);
}
