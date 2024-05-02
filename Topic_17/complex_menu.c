/* complex_menu.c */
/* Demonstrates 2-level menu. */
#include <stdio.h>

int main(void)
{
	int choice_1, choice_2;
	choice_1 = choice_2 = -1;	// Initial value to start the loop.

	do 
	{
		printf("\nWhat do you like to see?\n");
		printf("0. Exit\n");
		printf("1. 1980s\n");
		printf("2. 1990s\n");
		printf("3. 2000s\n");

		printf("Enter your choice: ");
		scanf(" %d", &choice_1);
		switch (choice_1)
		{
			case 0:
				printf("\n\nExit...\n");
				break;
			// This case for 1980s.
			case 1:
				printf("\n\nWhat section do you like to see?\n");
				printf("0. Exit\n");
				printf("1. Football\n");
				printf("2. Films\n");
				printf("3. RF presidents\n");

				printf("Enter your choice: ");
				scanf(" %d", &choice_2);
				if (0 == choice_2)
					printf("\n\nExit...\n");
				else if (1 == choice_2)
					printf("\n\nWorld series champions of 1980s is here...\n");
				else if (2 == choice_2)
					printf("\n\nThe best films of 1980s is here...\n");
				else if (3 == choice_2)
					printf("\n\nRF presidents of 1980s are here...\n");
				else
					printf("Sorry, that\'s incorrect number!\n");
				break;					

			// This case for 1990s.
			case 2:
				printf("\n\nWhat section do you like to see?\n");
				printf("0. Exit\n");
				printf("1. Football\n");
				printf("2. Films\n");
				printf("3. RF presidents\n");

				printf("Enter your choice: ");
				scanf(" %d", &choice_2);
				if (0 == choice_2)
					printf("\n\nExit...\n");
				else if (1 == choice_2)
					printf("\n\nWorld series champions of 1990s is here...\n");
				else if (2 == choice_2)
					printf("\n\nThe best films of 1990s is here...\n");
				else if (3 == choice_2)
					printf("\n\nRF presidents of 1990s are here...\n");
				else
					printf("Sorry, that\'s incorrect number!\n");
				break;					

			// This case for 2000s.
			case 3:
				printf("\n\nWhat section do you like to see?\n");
				printf("0. Exit\n");
				printf("1. Football\n");
				printf("2. Films\n");
				printf("3. RF presidents\n");

				printf("Enter your choice: ");
				scanf(" %d", &choice_2);
				if (0 == choice_2)
					printf("\n\nExit...\n");
				else if (1 == choice_2)
					printf("\n\nWorld series champions of 2000s is here...\n");
				else if (2 == choice_2)
					printf("\n\nThe best films of 2000s is here...\n");
				else if (3 == choice_2)
					printf("\n\nRF presidents of 2000s are here...\n");
				else
					printf("Sorry, that\'s incorrect number!\n");
				break;
			
			default:
				printf("There is no %d menu point. Try again.\n", choice_1);
				break;
		}
	} while (choice_1 != 0 && choice_2 != 0);

	return 0;
}
