#include <stdio.h>

int main(void) {
	int num1, num2;
	
	printf("INPUT two int  : ");
	scanf_s("%i %i", &num1, &num2);
	

	printf("%i + %i = %i \n",num1,num2,num1+num2);
	printf("%i - %i = %i \n", num1, num2, num1 - num2);
	printf("%i * %i = %i \n", num1, num2, num1 * num2);
	printf("%i / %i = %i \n", num1, num2, num1 / num2);
	printf("%i %% %i = %i \n", num1, num2, num1 % num2);
	
	return 0; 
	

}