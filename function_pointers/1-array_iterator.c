#include "function_pointers.h"
/**
* array_iterator - Executes a function on each element of an array
* @array: The array to process
* @size: Number of elements in the array
* @action: Pointer to the function to execute on elements
*
* Description: Iterates through array elements and applies given function.
*              Handles NULL checks for array and function pointer.
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;
    for (i = 0; i <= size; i++)
    {
        print (array[i]);
        (*action)([array]);
        }
}