#include <stdio.h>
#include <math.h>

#define NR 600851475143LL

int main() {
	long long n;
	int div, exp;
	int max;

	n = NR;
	div = 2;
	/* walk through all potential divisors
	 * until sqrt(n). */
	while ((long long)div * div <= n) {
		exp = 0;
		while (n % div == 0) {
			n /= div;
			exp++;
		}

		/* divisors are growing, this is surely the biggest */
		if (exp > 0)
			max = div;
		div++;
	}
	/* if we left one out */
	if (n > 1 && n > max)
		max = n;

	printf("%d\n", max);

	return 0;
}
