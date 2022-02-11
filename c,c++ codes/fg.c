#include<stdio.h>

int main(){
    char s[50];
    int i;
    printf("Enter a string:\n");
    scanf("%[^\n]",&s);
    printf("%s",s);
    return 0;
}
