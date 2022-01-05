// Assignment 1 – prog71985 – fall 2020
// Question 1
// feedback received:
//    no feedback received.
//Thi Huong Tra Le

//General changes: adding loop, make the program repeat until user wants to exit.

#include <stdio.h>
#include <tchar.h>
#define MAX_INPUT 20 


int  main(void)
{
	char firstName[MAX_INPUT];				
	char lastName[MAX_INPUT];					
	int firstInput;				
	int lastInput;

	printf("Please enter your first name(enter 1 to quit): ");		//Get user input instead of constant values
	while (scanf_s("%d",&firstInput) != 1)			//"==1" is only apply for int, it checks if the input is integer or not
	{												//if input is an int, break the loop
		gets(firstName);							//if not an integer, get the input (including space between words)

		printf("\nPlease enter your last name (enter 1 to quit): ");
		if ((scanf_s("%d",&lastInput)) != 1)		
		{
			gets(lastName);

			printf("%s %s\n", firstName, lastName);
			printf("%s\n%s\n", firstName, lastName);
			printf("%s ", firstName);
			printf("%s\n", lastName);

			printf("Please enter your first name(enter 1 to quit): ");		//repeat the loop until user enters a number to stop
			continue;
		}
		else
			break;
	}
	printf("\nBye.\n");

	return 0; 
}

