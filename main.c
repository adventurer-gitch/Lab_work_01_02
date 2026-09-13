#include "firstTask.h"
#include "secondTask.h"
#include "thirdTask.h"
#include "fourthTask.h"

int main()
{
	int task_number = 1;

	printf("[*] Laboratory Work 1, Variant 2\n");

	while (task_number != 0)
	{
		printf("[*] Codes of tasks:\n");
		printf("\t0 - exit\n\t1 - first task\n\t2 - second task\n\t3 - third task\n\t4 - fourth task\n");

		printf("[+] Enter task number: "); 
		
		if (scanf_s("%d", &task_number) != 1)
		{
			printf("[!] Error!\n");
			
			while (getchar() != '\n');
			continue;
		}

		if (getchar() != '\n')
		{
			printf("[!] Error!\n");

			while (getchar() != '\n');
			continue;
		}

		switch (task_number)
		{
		case 0:
			printf("[*] Close programm!\n");
			break;
		case 1:
			firstTask();
			break;
		case 2:
			secondTask();
			break;
		case 3:
			thirdTask();
			break;
		case 4:
			fourthTask();
			break;
		default:
			printf("[!] Error!\n");
			break;
		}
	}

	return 0;
}