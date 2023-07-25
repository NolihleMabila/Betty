#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int i = 0;
	int sum = 0;
	int diff_half1, diff_half2;

	srand(time(0));
	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}
	password[i] = '\0';
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			diff_half1++;
		}
		for (i = 0; password[i]; i++)
		{
			if ((password[i] >= (33 + diff_half1)) || (password[i] >= (33 + diff_half2)))
			{
				break;
			}

		}
	}
	printf("%s", password);
	return (0);
}

