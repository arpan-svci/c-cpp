#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 200

int vowel(char);

int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    int count = 0;

    for(int i=0; i < strlen(str) - 1; i++) {
        if(vowel(str[i]) && vowel(str[i+1])) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

int vowel(char a) {
    char vowel[] = "aeiou";
    int check = 0;
    int length = strlen(vowel);
    for(int i=0; i<length-1; i++) {
        if(vowel[i] == a) {
            check = 1;
            break;
        }
    }

    return check;
}