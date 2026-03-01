// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(void) {

	char input[50];


	do {
		printf("Enter a message: ");
		fgets(input, 50, stdin);
		input[strcspn(input, "\n")] = 0;
		printf("%s\n", input);

	}
		while(strcmp(input, "quit") != 0);
		
	 
	 
	 return 0;
 }