/**
* swap_int - swap integers
* @a: first
* @b: second
*
*/
void swap_int(int *a, int *b)
{
	int TempValue;

	TempValue = *a;
	*a = *b;
	*b = TempValue;
}

