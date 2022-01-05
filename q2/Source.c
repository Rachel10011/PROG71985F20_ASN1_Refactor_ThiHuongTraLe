// Assignment 1 – prog71985 – fall 2020
// Question 2
// feedback received:
//    no feedback received.
//Thi Huong Tra Le

#include <stdio.h>

#define CONVERT_YEARS_TO_DAYS(n) n*365		//A year has 365 days

int main(void)
{
	int ageInYears;
	int ageInDays;

	printf("Please enter your age (q to quit): ");			//Chagnes: take user's input instead of wriiting constant integer
	while (scanf_s("%d", &ageInYears) == 1)					//		   The program will stop executing if user's input is not number
	{
		if (ageInYears > 0)
		{
			ageInDays = CONVERT_YEARS_TO_DAYS(ageInYears);
			printf("Your %d years of age converted to days is %d days\n", ageInYears, ageInDays);

			printf("Please enter your age (q to quit): ");
			continue;
		}
		else
		{
			printf("Your input is invalid!!\n");
			printf("Please enter another age or q to quit: ");	//give user another chance to give different input if they enter invalid input
			continue;
		}
	}
	printf("Bye.\n");

	return 0;
}