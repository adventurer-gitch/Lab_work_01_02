#ifndef START_ERROR_INPUT_H
#define START_ERROR_INPUT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

void startErrorInput()
{
	printf("[!] Error!\n");

	while (getchar() != '\n');
}

#endif // !START_ERROR_INPUT_H