/* 
This is variables, we will be showing simple types, these include:

int
float
char

*/
#include <stdio.h>  // for printf
int main() {	// hope you remember this :) always needs return 0; at the end
	int x;	  // this is valid code, but its a bad practice because if you print it later, it will give random data
	int y = 5;  // instead, we can do this , which is a lot safer
	int z = 10;  // lets do some math, prehaps y + z, we will set x to y + z , since we already have it
	x = y + z;  // okay.. cool, but what if we want to see the result of y + z?

	// we can use the %d flag, which means 'print integer'

	printf("y + z = %d\n", x);	// this SHOULD print 15, if it doesnt, I did something terribly wrong, we need the \n because that means new line
  
	// integers in C (without any long or nothing, just plain int)
	// is 4 bytes large, −2,147,483,648 to 2,147,483,647 . or 32 bits large
	// bassicly that minecraft limit
	// okay, but what if we wanted a charecter
	// C doesnt have a string type (we will talk about that later) but there is a char type, we do:

	char grade = 'A';  // to print it, we can do %c:

	printf("my grade is %c :) \n", grade);

	// now, using char is simple, it isnt a full string (we will get to strings at strings.c) it can handle one singular ASCII charecter

	// if we want a float (or a decimal point number, instead of a whole number) we use the float type

	float num1 = 3.14159f;	// floats can have 6 digits of precision (6 digits after the .)
	float num2 = 1.23456f;
	float result = num1 + num2;
	// why do we need that final f? well, we use it to seperate double (64 bit) and float (32 bit)
	printf("num1 + num2 = %f\n", result);
	// a float is 32 bit in C, the same as a float64
	// to print a float, we use %f

	return 0;
}

// Today your homework is to:
// print float1 + float2
// print something using char with int
