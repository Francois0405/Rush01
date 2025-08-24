
#include <unistd.h>
#include <stdlib.h>

int     *strToArr(char *str)
{
        int     *arr;
        int	*kamikaze;
	int     i;
        int     j;

	kamikaze = NULL;
	arr = malloc(16 * sizeof(int));
        j = 0;
        i = 0;
        while (str[i] != '\0' && j < 16)
        {
                if (str[i] != ' ')
                {
			if (str[i] >= '0' && str[i] <= '9')
			{
				arr[j] = str[i] - '0';
                        	j++;
			}
			else
			{
				return (kamikaze);
			}
                }
                i++;
        }
        return (arr);
}

int     error_handler(int *arr, int dim)
{
        int     error;
	int	i;

	i = 0;
	error = 0;
	if (arr == NULL)
		error = 1;
	while (i < dim && error == 0)
	{
		if (arr[i] < 1 || arr[i] > 4)
		{
			error = 1;
		}
		i++;
	}
	i = 0;
	while ((i < 12) && error == 0)
	{
		if (arr[i] + arr[i + 4] > 5)
			error = 1;
		if (i == 3)
			i += 5;
		else
			i++;
	}
        return (error);
}

void    putError()
{
        char    n;

        n = '\n';
        write(1, "Error", 5);
        write(1, &n, 1);
}

int     main(int argc, char **argv)
{
        int     *arr;
	int	error;
	char	c;

	write(1, "BEGIN TEST", 10);
	write(1, "\n", 1);
        arr = strToArr(argv[1]);
        error = error_handler(arr, 16);
	c = error + '0';
	//write(1, &c, 1);
        if (error == 1)
        {
                putError();
        }
        return (0);
}
