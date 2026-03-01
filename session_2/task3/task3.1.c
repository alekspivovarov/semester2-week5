// Week 5, Session 2

/* Task 3.1
 * Number Guessing Game
 * A program where the computer selects a random number and the person tries to guess it
 */

#include <stdio.h>
#include <stdlib.h>  // For rand(), srand(), atoi()
#include <time.h>    // For time()
#include <string.h>  // For strcspn()

int main(void) {
    char input[20];      // Buffer for input
    int guess;           // The person's guess
    int target;          // The random number to guess
    int num_guesses;     // Counter for number of guesses
    int min = 1;         // Minimum value for random number
    int max = 100;       // Maximum value for random number
    int playing = 1;     // Flag to control the main game loop
    int hint_offered = 0;
    
    // Seed the random number generator
    srand(time(NULL));
    
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between %d and %d\n", min, max);
    
    
    
    // TODO: Implement the main game loop
    // This should continue until the person decides to quit
    do { 

        // Reset number of guesses for a new game
        num_guesses = 0;
        hint_offered = 0;

        // TODO: Generate a random number between min and max
    target = min + rand() % (max - min + 1);



        
        // TODO: Implement the guessing loop
        // This should continue until the correct number is guessed
            do {
            printf("Enter your guess: ");
            
            // TODO: Read and process the input
            fgets(input, 20, stdin);   //to process the input        
            guess = atoi(input); //to convert to integer
            
            num_guesses++;
            
            // TODO: Check if the guess is correct, too high, or too low
            // Provide appropriate in-game feedback
            if (guess > target) {
                printf("The guess is too high");
            } else if (guess < target) {
                printf("The guess is too low \n");
            } else {
                printf("You are correct!\n");
            }

            // TODO: Offer a hint after several failed attempts

            if (num_guesses > 6 && hint_offered == 0) {
                hint_offered = 1;
                printf("Would you like a hint? (yes/no)\n");
                fgets(input, 20, stdin);
                input[strcspn(input, "\n")] = 0;
                if (strcmp(input, "yes") == 0) {
                    int hint_low = target - 10;
                    int hint_high = target + 10;
                    printf("Hint: the number is between %d and %d\n", hint_low, hint_high);
                }
            }
        } while (guess != target);
            
            
            
            
            
            
        
        // TODO: Ask if the person wants to play again
        // Update the 'playing' flag based on the answer

        printf("Would you like to play one more time?\n");
        fgets(input, 20, stdin);
        input[strcspn(input, "\n")] = 0;
        if (strcmp(input, "yes") == 0) {
            playing = 1; 
        } else {
                playing = 0;
            }


        } while (playing != 0);
    
    
    printf("\nThanks for playing!\n");
    return 0;
}
