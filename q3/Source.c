// Assignment 1 – prog71985 – fall 2020
// Question 3
// feedback received:
//    no feedback received.
//Thi Huong Tra Le


#include <stdio.h>
#include <float.h>

#define MAX_INPUT FLT_MAX					//The program can only work if the input is not bigger than the limit of float
#define CALCULATE_SUM(n,m) n+m				//make the formulas constant so it will be clear and easier to fix/check when the result is wrong
#define CALCULATE_PRODUCT(n,m) n*m
#define CALCULATE_QUOTIENT(n,m) n/m

int main(void)
{
	float value1, value2, sum, product, quotient;

	printf("Please enter the first value (q to quit): ");
	while (scanf_s("%f", &value1, MAX_INPUT) == 1)			//if user's input is not a number, break the loop
	{														//Changes: adding loop which allow users enter input until they want to stop
		printf("Please enter the second value(q to quit): ");
		if (scanf_s("%f", &value2, MAX_INPUT) == 1)
		{
			printf("The sum of %.2f and %.2f is %.2f\n", value1, value2, CALCULATE_SUM(value1, value2));	// round the result to two decimal places
			printf("The product of %.2f and %.2f is %.2f\n", value1, value2, CALCULATE_PRODUCT(value1, value2));
			printf("The quotient of %.2f and %.2f is %.2f\n", value1, value2, CALCULATE_QUOTIENT(value1, value2));

			printf("Please enter the first value (q to quit): ");
			continue;
		}
		else
			break;
	}
	printf("Bye :)\n");

	return 0;
}