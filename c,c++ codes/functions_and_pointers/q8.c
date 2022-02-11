#include <stdio.h>
#include <string.h>

#define MAX_SIZE 230
int main() {
    char str[MAX_SIZE];
    printf("Enter a sentence: ");
    scanf("%[^\n]%*c", str);

    int length = strlen(str);

    for(int i = 0; i<length; i++) {
        if(str[i] == ' ') str[i] = '|';
    }
    printf("%s\n", str);

    return 0;
}
