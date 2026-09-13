#ifndef FOURTH_TASK_H
#define FOURTH_TASK_H

#include "startErrrorInput.h"

void fourthTask()
{
	int month_number;

	printf("[+] Enter month number: ");

	if (scanf_s("%d", &month_number) != 1 || getchar() != '\n')
	{
		startErrorInput();
		return;
	}

	switch (month_number)
	{
	case 12:
	case 1:
	case 2:
		printf("[$] Answer: Winter!\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("[$] Answer: Spring!\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("[$] Answer: Summer!\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("[$] Answer: Autumn!\n");
		break;
	default:
		startErrorInput();
		break;
	}
}

#endif // !FOURTH_TASK_H