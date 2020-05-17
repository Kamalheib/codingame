#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t arr[255] = {};
	uint8_t u8_arr[] = {1, 20, 100, 15, 2, 99, 230};
	int count = 0;
	int m = 5;
	uint8_t i;

	for (i = 0; i < 7; i++) {
		printf("%d\n", u8_arr[i]);
		arr[u8_arr[i]] = 1;
	}

	printf("\n\n");

	for (i = 254; i >= 0; i--) {
		if (arr[i] == 1) {
			printf("%d\n", i);
			count++;
		}
		if (count == m)
			break;
	}

	return 0;
}
