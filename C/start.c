/* 
Welcome, new C explorer. (that was corny fine.)
this is BRP (Burp), its collection of projects to help you learn C, each project is ment to be remixed by YOU
think of it kinda like .. templates
*/

#include <stdio.h> // this is stdio.h which means standard I/O (Input and Output) you will see this alot
// #include is kinda like import if your from python, <> looks through standard librarys first, "" looks through your dir/folder first.
// technicaly, <> is faster for the standard library, and "" is faster for other things

int main() {	// int main() this tells C that 'this function returns a integer' , a integer is just a whole number
	printf("Thanks for reading this file. and Hello, World!");
	return 0;   // this may seem redudent, but the OS actualy expects it to return something, mainly because this is a int function.
}

// the reason we need it to be called main() is because its the entry point, its the first thing you run
// if you named it something like start() it wouldn't run, because there is no main() !
