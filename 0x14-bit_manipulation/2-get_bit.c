
/**
 *get_bit - get bit at index
 *@n: num
 *@index: index of bit starting from 0
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	n = n >> index;
	n = n & 1;
	return (n);
}
