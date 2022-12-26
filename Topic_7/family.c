// family.c -- source C file for three children
#include <stdio.h>
#include <string.h>
#include "header.h"

int main(void)
{
	int age;
	char childname[14] = "Timofey";

	printf("%s have %d children.\n", FAMILY, KIDS);

	age = 11;
	printf("Elder son, %s, %d years.\n", childname, age);

	strcpy(childname, "Nikolay");
	age = 6;
	printf("Middle son, %s, %d years.\n", childname, age);

	age = 3;
	strcpy(childname, "Boris");
	printf("Young son, %s, %d years.\n", childname, age);

	return 0;
}
