#include <stdio.h>

/* solution: lcm of 20 */

#define MAX_N 20

int gcd(int a, int b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main() {
	int i;
	int lcm;

	lcm = 1;
	for (i = 2; i <= MAX_N; i++) {
		lcm = lcm / gcd(lcm, i) * i;
	}

	printf("%d\n", lcm);

	return 0;
}
