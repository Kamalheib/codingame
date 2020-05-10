#include <stdio.h>


void fib_iter(int len)
{
	int f0 = 0;
	int f1 = 1;
	int res;
	int i;

	for (i = 0; i < len; i++) {
		if (i == 0) {
			printf("%d ", i);
		} else if (i == 1) {
			printf("%d ", i);
		} else {
			res = f0 + f1;
			f0 = f1;
			f1 = res;
			printf("%d ", res);
		}
	}
}

int fib_rec(int len)
{
	if (len == 0)
		return 0;
	else if (len == 1)
		return 1;

	else {
		return fib_rec(len - 1) + fib_rec(len - 2);
	}
}

int main(void)
{

	/* 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 */
	int i;

	fib_iter(20);
	printf("\n");
	for (i = 0; i < 20; i++)
		printf("%d ", fib_rec(i));

	printf("\n");
	return 0;
}
