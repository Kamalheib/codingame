#include <stdio.h>
#include "stack.h"

int main(void)
{
	int arr[] = {2, 4, 8, 1, 5, 9};
	int i;


	for (i = 0; i < 6; i++) {
		if (arr[i] >= peek()) {
			push(arr[i]);
		}
	}

	while(!is_empty()) {
		printf("%d\n", pop());
	}

	return 0;
}