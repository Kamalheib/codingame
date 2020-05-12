#include <stdio.h>

void print_bits(int n)
{
	int mask = 1;
	int i;

	for (i = 7; i >= 0; --i) {
		if (n & (mask << i ))
		       printf("1 ");
		else
		       printf("0 ");
	}

	printf("\n");
}

int swap_bits(int n)
{
	int i, j = 0;
	int res = 0;
	int mask = 1;

	for (i = 7; i >= 0; --i) {
		if (n & (mask << i)) {
			res |= (mask << j);
		}

		j++;
	}

	return res;
}

int is_power_of_two(int n)
{
	int mask = 1;
	int res = 0;
	int i;

	for (i = 0; i < 32; i++) {
		if (n & (mask << i))
			res++;
		if (res > 1)
			return 0;
	}

	return 1;
}

int main(void)
{
	int b = 16;

	print_bits(b);
	print_bits(swap_bits(b));
	printf("is_power_of_tow=%d\n", is_power_of_two(b));

	return 0;
}
