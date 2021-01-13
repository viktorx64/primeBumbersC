#include <stdio.h>

int primeCount;


int testPrime(int num) {
	int i;
	for (i = 2; i < num; i++) {
		if(num % i == 0) {
			return 0;
		}
	}
	if (i == num) {
		return 1;
	}
	return 0;
}


int main() {
	printf("How many prime numbers do you want:");
	scanf("%d", &primeCount);
	//printf("%d", testPrime(primeCount));

	int i = 0;
	int j = 2;
	printf("---\n");
	while(i < primeCount) {
		if (testPrime(j) == 0) {
			//do nothing
		} else {
			printf("%d", j);
			printf(", ");	//seperate the numbers
			i++;
		}
		j++;	
	}
	return 0;
}
