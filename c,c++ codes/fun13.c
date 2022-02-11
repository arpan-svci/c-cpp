#include<stdio.h>
void main()
{
    int i,j,k,l,count=0,tem=0;
    char str[50];
    printf("enter the string...");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
         for(i=0;i<(count/2);i++)
         {
             if(str[i]==str[count-1-i])
                tem++;
         }
         if(tem==(count/2))
         printf("the string is palindrome");
         else
            printf("the string is not palindrome");

}
