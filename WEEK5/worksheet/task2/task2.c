/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Rhys Carter
 * ID: 201974757
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:\n");
	scanf("%s",hex);

	for (int letter = strlen(hex)-1; letter >= 0; letter--) {

		char ch = hex[letter];

		// if character is not between 0-9 OR A-F OR a-f
		if (!( (ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 70) || (ch >= 97 && ch <= 102) ) ) {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		// character is valid

		// convert letter to number if required

		int multiplier = 0;

		switch (ch) {
			case 65:
			case 97:
				multiplier = 10;
				break;
			case 66:
			case 98:
				multiplier = 11;
				break;
			case 67:
			case 99:
				multiplier = 12;
				break;
			case 68:
			case 100:
				multiplier = 13;
				break;
			case 69:
			case 101:
				multiplier = 14;
				break;
			case 70:
			case 102:
				multiplier = 15;
				break;
			default:
				multiplier = ch-48;

		}

		// index is the power of 16
		int index = strlen(hex) - 1 - letter;

		// printf("mult %d\n",multiplier);
		
		// calculate 16^index
		for (int power = 0; power < index; power++) {
			multiplier *= 16;
			// printf("power is %d\n",power);
		}

		decimal += multiplier;

		// printf("ch %c\n",ch);
		// printf("index %d\n",index);
		// printf("mult %d\n",multiplier);
		// printf("decimal %ld\n\n",decimal);
	}

	// 3A2 = 2x16^0 + 10x16^1 + 3x16^2
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}