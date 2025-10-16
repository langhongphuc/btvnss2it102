#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	float S;
	
	// Khai bao va khoi tao gia tri cho 3 bien so nguyen
	a = 3;
	b = 4;
	c = 2;
	// Tinh ket qua cua bieu thuc
	S = (sprt(pow(a, 2) + pow(b, 2)) / (c + 1)) + ((float)(a * b) / c)
	
	// In ket qua
	printf("Input: a=%d, b=%d, c=%d\n", a, b, c);
	printf("Output: S=%.2f\n", S);
	
	return 0;
}
