/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Mark Locse
 * ID: 201942895
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal: ");
	fgets(hex, 9, stdin);
	hex[strcspn(hex, "\n")] = '\0';
	int len = strlen(hex);


	for (int k=0; k<len; k++) {
		hex[k] = toupper(hex[k]);
	}
	

	// if input contains invalid hex digit
	for (int k=0; k<len; k++) {
		switch (hex[k]) {
			case 'A':
				hex[k] = 10;
				break;
			case 'B':
				hex[k] = 11;
				break;
			case 'C':
				hex[k] = 12;
				break;
			case 'D':
				hex[k] = 13;
				break;
			case 'E':
				hex[k] = 14;
				break;
			case 'F':
				hex[k] = 15;
				break;
			case '0':
				hex[k] = 0;
				break;
			case '1':
				hex[k] = 1;
				break;
			case '2':
				hex[k] = 2;
				break;
			case '3':
				hex[k] = 3;
				break;
			case '4':
				hex[k] = 4;
				break;
			case '5':
				hex[k] = 5;
				break;
			case '6':
				hex[k] = 6;
				break;
			case '7':
				hex[k] = 7;
				break;
			case '8':
				hex[k] = 8;
				break;
			case '9':
				hex[k] = 9;
				break;
			default:
				printf("Error: Invalid Hexadecimal\n");
				return 1;	
		}
	}
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	for (int i = len-1; i>=0; i--) {
		decimal += hex[i] * pow(16,len-1-i);
	}
	printf("decimal: %ld\n", decimal);
	
	return 0;
}