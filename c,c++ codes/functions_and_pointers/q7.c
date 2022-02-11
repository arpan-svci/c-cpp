#include <stdio.h>
#include <string.h>
int main() {
	char name[50];
	char initial[10];
	int top=0;
	printf("Enter a name: ");
	scanf("%[^\n]%*c", name);
	long unsigned int length = strlen(name);
	initial[0]= name[0];
	for(int i=1; i<length; i++) {
		if(name[i-1] == ' ') {
			top++;
			initial[top] =  name[i];
		}
	}

	initial[++top] = '\0';

	printf("%s\n", initial);	

	return 0;
}
