#include <stdio.h>
#include <stdbool.h>

int find_missing(int *arr, int len)
{
	bool flags[len];
	int i;

	for (i = 0; i < len; i++) {
		flags[arr[i]] = true;
	}

	for (i = 0; i < len; i++) {
		if (!flags[i])
			return i;
	}
}

int main(void)
{
	int a[99] = {};
	int i;

	for (i = 1; i <= 3; i++)
		a[i - 1] = i;

	for (i = 6; i <= 99; i++)
		a[i - 1] = i;

	for(i = 0; i < 99; i++)
	       printf("%d ", a[i]);

	printf("\n");
	printf("missing=%d\n", find_missing(a, 9));

	return 0;
}
