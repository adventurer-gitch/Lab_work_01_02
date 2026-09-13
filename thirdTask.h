#ifndef THIRD_TASK_H
#define THIRD_TASK_H

#include "startErrrorInput.h"

void thirdTask()
{
	double a, b, c;
	int n;

	printf("[+] Enter a: ");

	if (scanf_s("%lf", &a) != 1)
	{
		startErrorInput();
		return;
	}

	printf("[+] Enter b: ");

	if (scanf_s("%lf", &b) != 1)
	{
		startErrorInput();
		return;
	}

	printf("[+] Enter c: ");

	if (scanf_s("%lf", &c) != 1)
	{
		startErrorInput();
		return;
	}

	if (isnan(a) || isnan(b) || isnan(c))
	{
		startErrorInput();
		return;
	}

	n = (a > 0) + (b > 0) + (c > 0);

	printf("[$] Number of positive numbers: %d", n);
}

#endif // THIRD_TASK_H