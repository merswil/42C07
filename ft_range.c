#include<stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int len;
    int i;

    if (min >= max)
    {
        return(0);
	}
    len = max - min;
    arr = (int *)malloc(len * sizeof(int));
    if (!arr)
    {
        return(0);
	}
    i = 0;
    while (i < (len - 1))
    {
        arr[i] = min + i;
        i++;
    }
    return (arr);
}

#include<stdio.h>

int main(void)
{
    int min = 5;
    int max = 10;
    int *range;
    int i;

    range = ft_range(min, max);
    if (!range)
    {
        printf("Memory allocation failed or invalid range\n");
        return (1);
    }

    printf("Range from %d to %d:\n", min, max - 1);
    for (i = 0; i < (max - min); i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range); // Free the allocated memory
    return (0);
}
