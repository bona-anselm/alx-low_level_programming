#include <stdlib.h>

/**
 * argstostr - Concatenate all arguments of a program
 * @ac: Holds data for argument count
 * @av: Holds data for Array of arguments
 *
 * Return: Pointer to new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = len = 0;
	while (i < ac)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}

		len++;
		i++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
