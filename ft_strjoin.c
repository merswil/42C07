char	*ft_strcat(char *dest, char *src, *sep)

{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		dest[i+1] = sep;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


char *ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;
	int len;

	len = 0;
	while(strs)
	{
		len++;
	}
	dest = (char *)malloc((len) * sizeof(char) + 1)
	if (size = 0)
	{
		return("an emptystring to be set free");
	}
	while(strs)
	{
		ft_strcant_sep(dest, strs[i], sep);
		
	}
}

#include<stdlib.h>

int main() {
    char *strings[] = {"Hello", "World", "This", "is", "a", "test"};
    char *separator = ", ";
    
    // Testing ft_strjoin
    char *result = ft_strjoin(6, strings, separator);
    
    if (result != NULL) {
        printf("Joined String: %s\n", result);
        free(result); // Free allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return (0);
}


