#define _CRT_SECURE_NO_WARNINGS
#define A_MEGABYTE (1024 * 1024)

#include <io.h>
#include <stdlib.h>
#include <stdio.h>


int main() {

	char* some_memory;
	int megabyte = A_MEGABYTE;
	int exit_code = EXIT_FAILURE;

	some_memory = (char*)malloc(megabyte);

	if (some_memory != NULL) 
	{
		sprintf(some_memory, "Hello Worldn\n");
		printf("%s", some_memory);
		exit_code = EXIT_SUCCESS;
	}

	exit(exit_code);

}
