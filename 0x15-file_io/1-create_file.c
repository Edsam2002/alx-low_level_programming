#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int o, wr, slen = 0;
	char *buf;

	if (filename == NULL)
	return (-1);

	o = open(filename, 0_CREAT, 600)	
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;	
	}

	w = write(0, text_content, len);

	if (0 == -1 || w == -1)
	return (-1);

	close(0);

	return (-1);
}
