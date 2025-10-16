#include <stdio. h>

int main () {
	int number = 12345;
	int sum = 0;
	
	while (number > 0){
		sum += number % 10; // Lay chu so cuoi
		number /= 10;       // Bo chu so cuoi 
	} 
	printf("Tong cac chu so = %d\n", sum);
	return 0; 
}

