#include <stdio.h>

int isDivisorSumSame(int, int);
int amicableNumber(int, int);

int main() {
	int num1, num2;
	printf("Enter two numbers separated by spaces: ");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", amicableNumber(num1, num2));
	return 0;
}

int isDivisorSumSame(int N1, int N2) {
	int i=0, sum=0;
	for(i=2; i< N1; i++) {
			if(N1%i == 0) {
				sum += i;
			}
	}
	
	if(sum == N2)
		return 1;
	return 0;
}

int amicableNumber(int N1, int N2) {
	return (isDivisorSumSame(N1, N2) && isDivisorSumSame(N2, N1));
}
