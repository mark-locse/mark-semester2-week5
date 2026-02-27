//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
    char password[50];
    char correct_pass[50] = "secure123";
	printf("Enter your password: ");
    scanf("%s", password);
	// compare using strcmp(str1,str2) from week 4
    while (strcmp(password,correct_pass)!=0) {
        printf("Invalid password. Enter password: ");
        scanf("%s", password);
    }
	// complete the rest of the code here
	printf("Password correct! \n");
    return 0;
}