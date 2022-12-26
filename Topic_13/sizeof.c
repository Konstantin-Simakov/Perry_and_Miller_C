// sizeof.c -- demonstrates working the sizeof() operation
#include <stdio.h>

int main(void)
{
	float f = 5.02;
	char name[] = "Ruth Claire";
	int i = 7;

	printf("Size of the int type = %zd bytes.\n", sizeof(int));
	printf("Size of the float type = %zd bytes.\n", sizeof(float));
	printf("Size of the char type = %zd bytes.\n", sizeof(char));
	printf("Size of a variable of the float type = %zd bytes.\n", sizeof f);
	// printf("Size of a variable of the float type = %zd bytes.\n", sizeof(f));
	printf("Size of a variable of the int type = %zd bytes.\n", sizeof i);
	// printf("Size of a variable of the int type = %zd bytes.\n", sizeof(i));
	printf("Size of an char array (string) named \'name\' = %zd bytes.\n", sizeof name);
	// printf("Size of an char array (string) named \'name\' = %zd bytes.\n", sizeof(name));

	return 0;
}
