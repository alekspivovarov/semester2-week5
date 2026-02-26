// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {

	float sum;
	int count;
	float input;
	float average;

	sum = 0;
	count = 0;
 
	printf("--- Average Calculator ---\n");
	
	printf("Enter a number: ");
	scanf("%f", &input);
	while (input != -1)
	{
		sum += input;
		count += 1;
		printf("Enter a number: ");
		scanf("%f", &input);
	}
	average = sum / count;
	printf("Average: %f\n", average);
	return 0;
}