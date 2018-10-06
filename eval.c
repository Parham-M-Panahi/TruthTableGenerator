#include <stdio.h>
#include <string.h>

#include "include/utils.h"

typedef char *string;

int main(int argc, string argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage:eval [expr]\n");
		return 1;
	}

	string expr = despace(argv[1]);

	printf("%li, %li\n", strlen(argv[1]), strlen(expr));

	printf("%s\n", expr);
	
	return 0;
}
