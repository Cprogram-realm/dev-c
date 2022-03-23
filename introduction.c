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
	
	// Aritmetik iþlemler(TR)
	/*
		x + y -----> x ile y'yi toplar.
		x - y ------> x'den y'yi cýkarir.
		x * y ------> x ile y'yi carpar.
		x / y ------> x ile y'yi boler.
		
		x % y -----> x'in y ile bolumunden kalaný verir.
		
		+x ------> x sayisini arti ile carpar(sonuc degismez)
		-x ------> x sayisini - ile carpar(x sayýsý eksi ise arti yapar, x sayýsý arti ise eksi yapar.)
	*/
	
	// To apply the above arithmetic operations.
	int x1=1;
	int x2=-1;
	
	printf("%d\n",12+9);
	printf("%d\n",12-9);
	printf("%d\n",12*9);
	printf("%d\n",12/9);
	printf("%d\n",12%9);
	
	printf("%d\n",-x1);
	printf("%d\n",-x2);

	
	
	return 0;
}
