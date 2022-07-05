#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>

int main(void)
{
	char num;
	int pass = 0;

	srand(time(NULL));
	while(1)
	{
		num = (rand() % 128) + 1;
		pass += num;
		if (pass == 2772)
		{
			putchar(num);
			return (0);
		}
		if (pass > 2772)
		{
			pass = pass - num;
			num = 2772 - pass;
			putchar(num);
			return (0);
		}
		putchar(num);
	}
}
