#include<stdlib.h>
#include<stdio.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	s = (char *) malloc(i * sizeof (char) + 1);
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

int	main(void)
{
	printf("%s\n", ft_strdup("hello friend!"));
	return (0);
}
