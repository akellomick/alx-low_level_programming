/**
 * reverse_array - reverses content of an array of integers.
 * @n:number of elements of the array.
 * @a:pointer to an array of integers
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int s  = 0;
	int e = n - 1;

	while (s < e)
	{
		int swp;

		swp = a[s];
		a[s] = a[e];
		a[e] = swp;

		s++;
		e--;
	}
}
