#include <stdio.h>

int main() {
	char buffer[50];
	int count=-1, i;
	printf("Enter some characters: ");
	fgets(buffer, sizeof(buffer), stdin);
	for(i=0; buffer[i]!= '\0'; i++) {
		count++;
	}
	for(i=count-1; i>=0; i--) {
		printf("%c", buffer[i]);
	}
	printf("\n");
	return 0;
}
