#include <string.h>
#include <stdlib.h>


char *despace(char *string)
{
	if (!string)
	{
		return NULL;
	}

	char *buffer = malloc((strlen(string) + 1) * sizeof(char));
	if (!buffer)
	{
		return NULL;
	}


	int j = 0;
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] != ' ')
		{
			buffer[j] = string[i];
			j++;
		}
	}
	buffer[j] = '\0';

	return buffer;
	
}
