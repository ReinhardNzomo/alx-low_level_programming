#include <stdio.h>
/**
* main - natural numbers
* return: 0
*/
int main(void)
{
	int s, t, f, tm, fm;

	s = 0;
	for (t = 0; t <= (1024 / 3); t++)
	{
		tm = 3 * t;
		s = s + tm;
	}
	for (f = 0; f <= (1024 / 5 ); f++)
	{
		if (!(f % 3 == 0))
		{
			fm = f * 5;
			s = s + fm;
		}
	}
	printf("%i\n", s);
	return (0);
}
