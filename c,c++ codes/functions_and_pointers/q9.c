#include <stdio.h>
#define MAX_SIZE 200
int main() {
    char str[MAX_SIZE];
    printf("Enter a sentence: ");
    scanf("%[^\n]%*c", str);

    for(int i=0;str[i] != '\0'; i++) {
        if(str[i] > 96 && str[i] < 123) {
            str[i] += ('A' - 'a');
        }
    }

    printf("%s\n", str);

    return 0;
}