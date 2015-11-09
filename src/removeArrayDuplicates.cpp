/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int i, index = 0, frequencyArray[10];
	if (Arr != NULL&&len > 0)
	{
		for (i = 0; i < 10; i++)
		{
			frequencyArray[i] = 0;
		}
		for (i = 0; i < len; i++)
		{
			if (frequencyArray[Arr[i]] == 0)
				frequencyArray[Arr[i]] ++;
		}
		for (i = 0; i < 10; i++)
		{
			if (frequencyArray[i] != 0)
			{
				Arr[index] = i;
				index++;
			}
		}
	}
	return NULL;
}