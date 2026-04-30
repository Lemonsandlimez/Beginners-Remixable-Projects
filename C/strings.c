/* 
This is strings, we will be using.. strings in this program.

you see, strings in C is a bit messy, while C doesnt have any string type, there is a %s which means print string.
but how?
a string in C is just a array of chars, for now we will keep it simple, and just use it for strings.
for example, we can do:

char name[32] = "Lemon";		(yes, you can call me Lemon now. I declared my name Lemon)

what is the [x] for?
it just means the size of the array, if we didnt have a number, like we just had it would be un-changable.
and the [32] makes it safer for future use with other functions in the future.
lets start coding :)
*/

#include <stdio.h>	// you likely know why this exists by now

int main() {
	char name[32] = "Lemon";	// this makes a arrray (or for you python-ers, a list)
	/* 
	the array looks like:
	['l', 'e', 'm', 'o', 'n', '\0', ...]
	why is the \0 important?
	its a 'Null terminator' , a way to tell C 'this is the end of the string'
	it is important for strlen() and printf() to know where text ends in memory
	*/
	printf("Hello, my name is %s! \n", name);	// expected output: Hello, my name is Lemon!

	// .. and thats it
	// for now we are keeping it simple
	
	return 0;	// incase you forgot, the OS expects a integer to be returned, 0 just means 'its good!'
}

/*
HOMEWORK:

Your homework for today is to print your name in a name variable :) (a fake name is good enough)
for extra credit, throw in your age (or any number)

do it or the FBI will boom your door (joke. partily)
*/
