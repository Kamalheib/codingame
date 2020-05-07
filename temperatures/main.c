#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of temperatures to analyse
    int n;
    int result = 5526;
    bool f = false;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);

        fprintf(stderr, "t=%d ", t);

        if (t < 0)
            f = true;
        else
            f = false;

        if (abs(t) < result) {
            result = abs(t);
        }
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    if (n == 0)
        result = 0;

    printf("%d\n", f ? (-1 * result) : result);

    return 0;
}
