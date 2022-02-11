#include <stdio.h>

int sumofdigits(int);
int sum = 0;
int main() {
	int N;
	printf("Enter the number: ");
	scanf("%d", &N);
	printf("The sum of the digits is %d.\n", sumofdigits(N));
	return 0;
}

int sumofdigits(int N) {
	int sum = 0;
	if(N > 0) {
		sum = N%10 + (sumofdigits(N/10));
	}
	
	return sum;
}
