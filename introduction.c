#include <stdio.h>



int main() {
	
	// basic
	printf("Hello, world!\n");
	
	// Let's define our variables
	int a1=42;
	char b1=66;
	char b2='B';
	float c1=4.2;
	double d1=0.21;
	
	// Let's print our variables
	printf("%d %c %d %.1f %.2f %d\n",a1,b1,b2,c1,d1);
	
	// Calculating bytes of variables with printf
	printf("%d byte\n"sizeof(char));
	printf("%d byte\n"sizeof(int));
	printf("%d byte\n"sizeof(short int));
	printf("%d byte\n"sizeof(long int));
	printf("%d byte\n"sizeof(float));
	printf("%d byte\n"sizeof(double));

	
	return 0;
}
