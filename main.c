#include <stdio.h>

int main(void) {
	int input_s;
	int h, m, s;

	printf("INPUT sec  : ");
	scanf_s("%i", &input_s);
	s = input_s % 3600 % 60;
	m = input_s % 3600 / 60;
	h = input_s / 3600;


	printf("%i h : %i m : %i s \n", h, m, s);

	return 0;


}