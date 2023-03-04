#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, is_prime, a1, a2;
	do {
		printf("Enter a positive integer: \n");
		scanf("%d", &a1);
		printf("Enter another positive integer: \n");
		scanf("%d", &a2);
	} while (a1 == a2 | a1 < 1 | a2 < 1);
	printf("Prime numbers between %d and %d:\n", a1, a2);
	/* Your codes start */
    if (a1 < a2)
    {
        for (i = a1; i < a2; i++) {
            is_prime = 1;
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime == 1)
                printf("%d ", i);
            else
            { }
        }
    }
    else
    {
        for (i = a2; i < a1; i++) {
            is_prime = 1;
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime == 1)
                printf("%d ", i);
            else
            { }
        }
    }
    printf("\n\n");
	/* Your codes end */
	return 0;
}