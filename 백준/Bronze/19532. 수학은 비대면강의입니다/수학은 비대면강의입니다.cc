#include <stdio.h>

int main()
{
	int a, b, c;
	int d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	int x = 0, y = 0;
	
	for (int i = -999; i < 1000; ++i)
	{
		for (int j = -999; j < 1000; ++j)
		{
			if (a * i + b * j == c &&
				d * i + e * j == f)
			{
				x = i;
				y = j;
				break;
			}
		}
	}

	printf("%d %d", x, y);

	return 0;
}