#include <stdio.h>

int main() {
	int a = 12, b = 4;   // khai bao va khoi tao hai bien so nguyen
	int tong, hieu, tich;
	float thuong;        //  thuong nen dung kieu float de hien thi so thuc
	
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (float)a / b;     // ep kieu chia ra so thuc
	
	printf("Tong: %d\n", tong);
	printf("Hieu: %d\n", hieu);
	printf("Tich: %d\n", tich);
	printf("Thuong: %.2f\n", thuong);
    
    return 0; 
}
