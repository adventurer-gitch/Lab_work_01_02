#ifndef FIRST_TASK_H
#define FIRST_TASK_H

#include "startErrrorInput.h"

void firstTask()
{
	double edge_of_cube, surface_area_of_cube, volume_of_cube;
	bool not_number, number_with_trash, non_positive_number, if_nan, if_inf;

	printf("[+] Enter edge of the cube: ");

	/*not_number = scanf_s("%lf", &edge_of_cube) != 1;
	non_positive_number = edge_of_cube <= 0.0;
	number_with_trash = getchar() != '\n';*/

	if (scanf_s("%lf", &edge_of_cube) != 1 || edge_of_cube <= 0.0 || getchar() != '\n')
	{
		startErrorInput();
		return;
	}

	surface_area_of_cube = 4 * pow(edge_of_cube, 2);
	volume_of_cube = pow(edge_of_cube, 3);

	if_nan = isnan(surface_area_of_cube) || isnan(volume_of_cube);
	if_inf = isinf(surface_area_of_cube) || isinf(volume_of_cube);

	if (if_nan || if_inf)
	{
		startErrorInput();
		return;
	}

	printf("[$] Surface area of the cube: %.3lf\n", surface_area_of_cube);
	printf("[$] Volume of the cube: %.3lf\n", volume_of_cube);
}

#endif // FIRST_TASK_H