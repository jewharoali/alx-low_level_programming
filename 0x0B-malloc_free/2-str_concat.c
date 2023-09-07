#include "main.h"

/**
 * *str_concat - that concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * Return:NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
