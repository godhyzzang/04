#include <stdio.h>

int main(void) {
	int x, y, z, m;
	int a, b, c;
	x = 2;
	z = 1;
	a = 3;
	b = 4;
	c = 5;

	/*y = a * x ^ 2 + b * x + c;*/
	//12 + 8+5
	y = a * x *x+ b * x + c; //25
	m = (x + y + z) / 3; //9
		//�������� ��¥ ���� ���ؾ��Ҷ��� float����ȯ �ʿ�?

	printf("y=%d, m=%d", y, m);

}