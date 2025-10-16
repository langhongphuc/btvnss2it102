#include <stdio.h>

int main () {
	int number = 12345;
	int result = 0;
	
	while (number > 0){
		int digit = number % 10;       // Lay chu so cuoi 
		result = result * 10 + digit;  // Ghep vao ket qua theo thu tu nguoc 
		number /= 10;                  // Bo chu so cuoi 
	} 
    
    printf("So dao nguoc la: %d\n", result);
	return 0; 
}
