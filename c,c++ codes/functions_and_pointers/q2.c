#include <stdio.h>


int findbinary(int);
int main() {
	int N;
	printf("Enter a decimal number: ");
	scanf("%d", &N);
	printf("The binary number is %d.\n", findbinary(N));
	return 0;
}

int findbinary(int decimal) {
	if(decimal == 0)
		return 0;
	else 
		return (decimal%2 + 10*(findbinary(decimal/2)));
}
