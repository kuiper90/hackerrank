/* https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem */
#include <stdio.h>

void calculate_the_maximum(int n, int k) {
	int max_add = 0, max_or = 0, max_xor = 0;
	int val_add, val_or, val_xor;
	int m = 1;
		
	while (n > 1)
	{
		m = 1;
		while (m < n)
		{
			max_add = ((val_add = n & m) < k && val_add > max_add) ? val_add : max_add;
			max_or = ((val_or = n | m) < k && val_or > max_or) ? val_or : max_or;
			max_xor = ((val_xor = n ^ m) < k && val_xor > max_xor) ? val_xor : max_xor;
			m++;
		}
		n--;
	}
	printf("%d\n%d\n%d\n", max_add, max_or, max_xor);
}

int main(int argc, char** argv) {
	int n, k;	
	
	scanf_s("%d %d", &n, &k);
	calculate_the_maximum(n, k);
	return (0);
}