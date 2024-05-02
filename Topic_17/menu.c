/* menu.c */
/* Demonstrates menu with a switch operator. */
#include <stdio.h>

int main(void)
{
	int choice;

	printf("What do you like to do?\n");
	printf("0. Exit program\n");
	printf("1. Add new contact\n");
	printf("2. Edit exist contact\n");
	printf("3. Call conatact\n");
	printf("4. Write a message to contact\n");
	printf("5. Delete contact\n");

	do
	{
		printf("\nMake a choice: ");
		scanf(" %d", &choice);
		switch (choice)
		{
			case 0:
				printf("Exit...\n");
				break;
			case 1: 
				printf("\nTo add a contact you need to enter\n");
				printf("last and first name and phone number\n");
				break;
			case 2:
				printf("\nPrepare to enter contact name,\n");
				printf("which you need to change\n");
				break;
			case 3:
				printf("\nWhat contact do you want to call?\n");
				break;
			case 4:
				printf("\nWhat contact do you want to write to?\n");
				break;
			case 5:
				printf("\nWhat contact do you want to delete?\n");
				break;
			default:
				printf("%d is incorrect choice, choose another.\n", choice);
				break;
		}
	} while (choice != 0);

	return 0;
}
