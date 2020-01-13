/*
 ============================================================================
 Name        : PreAssignment_Q_6.c
 Author      : Shivam Palaskar
 Version     :
 Copyright   : Open source
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void printRoman(int);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	printf("Enter a Number : ");
	scanf("%d", &i);
	int rem, mul;
	rem = i % 10;
	mul = i - rem;
	printRoman(mul);
	printRoman(rem);

	return EXIT_SUCCESS;
}

printRoman(int i) {
	switch (i) {
	case 1:
		printf("I");
		break;
	case 2:
		printf("II");
		break;
	case 3:
		printf("III");
		break;
	case 4:
		printf("IV");
		break;
	case 5:
		printf("V");
		break;
	case 6:
		printf("VI");
		break;
	case 7:
		printf("VII");
		break;
	case 8:
		printf("VIII");
		break;
	case 9:
		printf("IX");
		break;
	case 10:
		printf("X");
		break;
	case 20:
		printf("XX");
		break;
	case 30:
		printf("XXX");
		break;
	case 40:
		printf("XL");
		break;
	case 50:
		printf("L");
		break;
	case 60:
		printf("LX");
		break;
	case 70:
		printf("LXX");
		break;
	case 80:
		printf("LXXX");
		break;
	case 90:
		printf("XC");
		break;
	case 100:
		printf("C");
		break;
	}
}
