#include <stdio.h>

int main() {
	int i, n = 1000;
	/* Your codes start */
	for (i = 1; i <= n; i++)
	{
		if (i % 54 == 0)
			printf("");
		else if (i % 9 == 0)
			printf("%d ", i);
		else if (i % 6 == 0)
			printf("%d ", i);
		else
			printf("");
	}
	/* Your codes end */
	return 0;
}