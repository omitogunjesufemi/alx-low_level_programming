/**
 * int_index - searches for an integer
 * @array: the array storage of the integer
 * @size: number of elements in the array
 * @cmp: the function for finding the match
 * Return: index of the integer in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
