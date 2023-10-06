#include <stdio.h>

int main(void) {
	int year;
	
	
	printf("INPUT year  : ");
	scanf_s("%i", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		printf("LEAP YEAR");
	else
		printf("NOT leap year");

	
	return 0; 
	

}