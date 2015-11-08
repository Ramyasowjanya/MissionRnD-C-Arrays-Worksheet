/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, j, locations[2] = { 0, 0 };
	if (Arr != NULL&&len >= 0)
	{
		for (i = 0; i < len - 1; i++)
		{
			if (Arr[i] > Arr[i + 1])
			{
				locations[0] = i; break;
			}
		}
		for (j = i + 1; j < len - 1; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				locations[1] = j + 1; break;
			}
		}
		swap(&Arr[locations[0]], &Arr[locations[1]]);
	}
	return NULL;
}