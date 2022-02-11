#include <stdio.h>

int main() {
	char str[50];
	printf("Enter some characters: ");
	fgets(str, sizeof(str), stdin);
	int count = 0;
	for(int i=0; str[i]!='\0'; i++)
		count++;
	printf("The number of characters is %d.\n", count - 1);
	return 0;
}
