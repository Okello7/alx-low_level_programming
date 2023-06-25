/*
 * C program that prints the size of various types on the computer.
 * Where it is compiled and run on.
 */

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	double d;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	printf("size of a double: %ld byte(s)\n", sizeof(d));
	return (0);
}
