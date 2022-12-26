// star.c -- demonstrates logical operations
#include <stdio.h>

int main(void)
{
	int planets = 8;
	int freinds = 6;
	int potter_book = 7;
	int star_wars = 6;
	int months = 12;
	int beatles = 4;
	int avengers = 6;
	int baseball = 9;
	int basketball = 5;
	int football = 11;

	if (freinds + beatles >= baseball &&
		freinds + avengers >= football)
	{
		printf("Actors of \"Friends\" and participants of \"Beatles\" ");
		printf("could be a baseball team.\n");
		printf("AND actors of \"Friends\" and \"Avengers\" ");
		printf("could be a football team.\n\n");
	}
	else
	{
		printf("Actors of \"Friends\" won\'t be able to become");
		printf("a baseball team with a \"Fantastic Four\".\n");
		printf("OR they won\'t be able to be a football team with ");
		printf("\"Avengers\" (or neither).\n\n");
	}

	if (star_wars <= months || potter_book <= months)
	{
		printf("You can read a book of \"Harry Potter\" per month,\n");
		printf("and finish reading all series less than a year.\n");
		printf("OR you can watch a film of \"Star Wars\" per month,\n");
		printf("and finish watching all saga less than a year.\n\n");
	}
	else
	{
		printf("None of this can happen: too little books and films,\n");
		printf("and too little time!\n\n");
	}

	if (!(baseball + basketball > football))
	{
		printf("The sum of baseball and basketball players less than\n");
		printf("football players in the team.\n");
	}
	else
	{
		printf("The sum of baseball and basketball players more than\n");
		printf("football players in the team.\n");
	}

	return 0;
}
