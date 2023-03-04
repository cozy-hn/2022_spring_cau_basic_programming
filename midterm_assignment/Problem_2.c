#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char chr1, chr2, chr3, chr4, chr5, temp_chr;
	int i, num_up = 0, num_low = 0;
	printf("Enter five characters: \n");
	scanf("%c%c%c%c%c", &chr1, &chr2, &chr3, &chr4, &chr5);
	/* Your codes start */
	for (i = 1; i <= 5; i++)
	{
		if (i == 1)
			temp_chr = chr1;
		else if (i == 2)
			temp_chr = chr2;
		else if (i == 3)
			temp_chr = chr3;
		else if (i == 4)
			temp_chr = chr4;
		else if (i == 5)
			temp_chr = chr5;
		else
		{ }
		if (temp_chr >= 'A' && temp_chr <= 'Z')
		{
			num_up++;
		}
		else if (temp_chr >= 'A' && temp_chr <= 'Z')
		{
			num_low--;
		}
		else
		{ }
	}
	/* Your codes end */
	printf("Number of upper case letters: %d\n", num_up);
	printf("Number of lower case letters: %d\n", num_low);
	return 0;
}