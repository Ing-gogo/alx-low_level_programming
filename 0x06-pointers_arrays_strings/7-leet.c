#include "main.h"
/**
 * leet - changing certain letters to numbers
 * @s: parameter
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char leet[256] = "A4BCD3FGHIJK1MN0PQR57UVWXYZa4bcd3fghijk1mn0pqr57uvwxyz";

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			j = s[i] - 'A';
			s[i] = leet[j];
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = s[i] - 'a' + 26;
			s[i] = leet[j];
		}
		i++;
	}
	return (s);
}
