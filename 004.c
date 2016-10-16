#include <stdio.h>

#define MIN 100
#define MAX 999

int isPalindrome(int n) {
	int r, nc;

	/* nc is the copy of n */
	nc = n;
	r = 0;
	while (n > 0) {
		r = r * 10 + n % 10;
		n /= 10;
	}

	return r == nc;
}

int main() {
	int i, j;
	int maxi, maxj;
	int max;

	max = 0;
	for (i = MAX; i >= MIN; i--) {
		for (j = MAX; j >= MIN; j--) {
			if (i * j > max && isPalindrome(i * j)) {
				max = i * j;
				maxi = i;
				maxj = j;
			}
		}
	}

	printf("%d * %d = %d\n", maxi, maxj, max);

	return 0;
}
