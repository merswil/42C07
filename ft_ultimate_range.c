#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *arr;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    arr = (int *)malloc((max - min) * sizeof(int));
    if (!arr)
    {
        *range = NULL;
        return (-1);
    }
    i = 0;
    while (min < max)
    {
        arr[i] = min;
        min++;
        i++;
    }
    *range = arr;
    return (i); // Length of the range
}

#include<stdio.h>
int	main(void)
{
    int *range;
    int size;
    int i;
    int min = 5;
    int max = 10;

    size = ft_ultimate_range(&range, min, max);
    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    if (size == 0)
    {
        printf("Invalid range: min >= max\n");
        return (1);
    }

    printf("Range from %d to %d:\n", min, max - 1);
    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range); // Free the allocated memory
    return (0);
}
