//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while True:
 *     choice = input("Enter 'q' to quit: ")
 *     if choice == 'q':
 *         break
 */
	char choice;

	// while loop
	/* while (1) {
		printf("Enter 'q' to quit: ");
		scanf("%c", &choice);

		if (choice == 'q') {
			break;
		}
	}
*/

// do while loop

do {
	printf("Enter 'q' to quit: ");
		scanf(" %c", &choice);
} while (choice != 'q');
	
    return 0;
}