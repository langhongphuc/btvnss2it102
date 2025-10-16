#include <stdio.h>
#include <math.h>

int main () {
	int a = 2, b = 3, c = 1;   // Khai bao va khoi tao gia tri cho 3 bien so nguyen
	double A;                  // Bien luu ket qua (dang double vi co can bac hai)
	
	A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);
	
	printf("Gia tri cua A = %.2f\n", A);
	return 0; 
}
