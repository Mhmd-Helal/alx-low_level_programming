/**
 *set_bit - set bit at index
 *@n: num
 *@index: index of num a
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
