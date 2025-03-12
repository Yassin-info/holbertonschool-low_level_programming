#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** If malloc fails, terminates process with status 98
* It ensures that memory allocation is successful,
* and if not, it terminates the program with a specific
* exit status, providing a safety net for memory allocation
*/
void *malloc_checked(unsigned int b)
{
void *m = malloc(b);
if (m == NULL)
exit (98);
return (m);
}