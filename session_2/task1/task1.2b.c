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
	char choice[100];
	// complete the rest of the code here
	while (1) {
		printf("Enter 'q' to quit: ");
		fgets(choice, sizeof(choice), stdin);
		if (choice[0] == 'q' && choice[1] == '\n') {
			break;
		}
	}

	do {
		printf("Enter 'q' to quit: ");
		fgets(choice, sizeof(choice), stdin);
		if (choice[0] == 'q' && choice[1] == '\n') {
			break;
		}
	} while (1);

	return 0;
}