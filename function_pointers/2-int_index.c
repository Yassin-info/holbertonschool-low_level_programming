#include "function_pointers.h"
/**
* int_index - Searches for an integer using a comparison function
* @array: Array to search through
* @size: Number of elements in the array
* @cmp: Pointer to function used to compare values
*
* Description: Applies comparison function to each array element
*              until a match is found. Validates inputs first.
* 
* Return: Index of first element where cmp() != 0,
*         -1 if no match/size <=0/NULL params
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if((*cmp)(array[i]) != 0)
return (i);
}
return (-1);
}
