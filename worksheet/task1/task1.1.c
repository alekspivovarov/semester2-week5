// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>
#include <stdbool.h>

int i;
int j;
bool is_prime;

int main(void) {
	for(i=2; i<=100; i++)
		{ 	is_prime = true;
			for (j=2; j<=i-1; j++) 
			{
				if (i % j == 0) {
				is_prime = false;
				}
			
			}
			if (is_prime) {
				printf("%d\n", i);
			}

		}
    
	return 0;
}