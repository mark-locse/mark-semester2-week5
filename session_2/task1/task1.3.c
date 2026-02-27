//Week 5, Session 2

# include <stdio.h>
# include <stdlib.h>

int main(int argc, char **argv){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */
    int sum = 0;
    for (int i=1; i<argc; i++) {
        sum+=atoi(argv[i]);
    }
    printf("Your sum: %d \n", sum);
    return 0;
}