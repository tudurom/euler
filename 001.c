#include <stdio.h>

#define MAX_N 1000

int main() {
	int i, sum;

	sum = 0;
	for (i = 0; i < MAX_N; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d", sum);

	return 0;
}
