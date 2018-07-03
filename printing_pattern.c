/* https://www.hackerrank.com/challenges/printing-pattern-2/problem */
#include <stdio.h>

int main(int argc, char** argv)
{
	int r, c, s, len;
	int n = 4;

	len = 2 * n - 1; //size of the matrix
	r = 0;
	c = 0;
	s = 0;
	while (r < len)
	{
		c = 0;
		while (c < len)
		{
			s = r < c ? r : c;
			s = s < len - r ? s : len - r - 1;
			s = s < len - c - 1 ? s : len - c - 1;
			printf("%d ", n - s);
			c++;
		}
		r++;
		printf("\n");
	}
	return (0);
}