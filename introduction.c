#include <stdio.h>



int main() {
	
	// basic suppression
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
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));

	// Performing arithmetic operations
	/*
		x + y -----> balls x and y.
		x - y ------> Subtract x from y.
		x * y -------> Multiply x by y.
		x / y -------> Divides x by y.
		
		x % y -----> Returns the remainder of x divided by y.
		
		+x ------> multiplies x by plus (result does not change)
		-x ------> Multiplies x by - (if x is negative, it makes a plus; if x is plus, it makes a minus)
	*/
	
	// Aritmetik i�lemler(TR)
	/*
		x + y -----> x ile y'yi toplar.
		x - y ------> x'den y'yi ��kar�r.
		x * y ------> x ile y'yi �arpar.
		x / y ------> x ile y'yi b�ler.
		
		x % y -----> x'in y ile b�l�m�nden kalan� verir.
		
		+x ------> x say�s�n� arti ile �arpar(sonu� de�i�mez)
		-x ------> x say�s�n� - ile �arpar(x say�s� eksi ise art� yapar, x say�s� art� ise eksi yapar.)
	*/
	
	
	
	return 0;
}
