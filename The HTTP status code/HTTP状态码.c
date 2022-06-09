#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	while (scanf("%d", &q) != EOF)
	{
		if (!(q - 200))
		{
			printf("OK\n");
		}
		else if (!(q - 202))
		{
			printf("Accepted\n");
		}
		else if (!(q - 400))
		{
			printf("Bad Request\n");
		}
		else if (!(q - 403))
		{
			printf("Forbidden\n");
		}
		else if (!(q - 404))
		{
			printf("Not Found\n");
		}
		else if (!(q - 500))
		{
			printf("Internal Server Error\n");
		}
		else
		{
			printf("Bad Gateway\n");
		}
	}
	return 0;
}