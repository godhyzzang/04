#include <stdio.h>

int main(void) {
	int input_s;
	int m, s;
	
	printf("INPUT sec  : ");
	scanf_s("%i", &input_s);
	s = input_s % 60;
	m = input_s / 60;
	

	printf("%i m : %i s \n",m,s);
	
	return 0; 
	

}