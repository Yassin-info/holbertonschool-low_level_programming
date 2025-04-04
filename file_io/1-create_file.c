#include "main.h"
/**
* 
*/
int create_file(const char *filename, char *text_content)
int create_file(const char *filename, char *text_content)
{
    int i = 0;

    if (filename == NULL)
        return (-1);

    i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (i == -1)
	return (-1);
}
