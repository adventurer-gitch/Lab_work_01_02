#ifndef SECOND_TASK_H
#define SECOND_TASK_H

#include "startErrrorInput.h"

void secondTask()
{
	double point_x, point_y, sq_x, sq_y;
	bool not_number_x, not_number_y, numbers_with_trash, if_nan, if_inf, hit;

	printf("[+] Enter x: ");

	not_number_x = scanf_s("%lf", &point_x) != 1;

	if (not_number_x)
	{
		startErrorInput();
		return;
	}

	printf("[+] Enter y: ");

	not_number_y = scanf_s("%lf", &point_y) != 1;

	if (not_number_y)
	{
		startErrorInput();
		return;
	}

	numbers_with_trash = getchar() != '\n';
	if_nan = isnan(point_x) || isnan(point_y);
	if_inf = isinf(point_x) || isinf(point_y);

	if (numbers_with_trash || if_nan || if_inf)
	{
		startErrorInput();
		return;
	}

	sq_x = pow(point_x, 2);
	sq_y = pow(point_y, 2);

	if_nan = isnan(sq_x) || isnan(sq_y);
	if_inf = isinf(sq_x) || isinf(sq_y);

	if (if_nan || if_inf)
	{
		startErrorInput();
		return;
	}

	hit = fabs(sq_x + sq_y - 1.0) < 1e-9;

	if (hit)
	{
		printf("[$] The point lies on the circle!\n");
	}
	else
	{
		printf("[$] The point does not lie on the circle!\n");
	}
}

#endif // SECOND_TASK_H