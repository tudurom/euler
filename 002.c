#include <stdio.h>

/* that's 4 million */
#define MAX_N 4000000

int main() {
	int prev, pprev, tmp;
	long long sum;

	pprev = 0;
	prev = 1;
	sum = 0;
	while (prev + pprev <= MAX_N) {
		if ((prev + pprev) % 2 == 0)
			sum += (long long)prev + pprev;
		tmp = prev + pprev;
		pprev = prev;
		prev = tmp;
	}

	printf("%lld", sum);
}
