#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A C program that print all datatype
 *
 * Return: Always 0 (succeed)
 *
 */
int main(void)
{
	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %lu bytes \n", sizeof(char int));
	printf("Size of an int: %lu bytes \n", sizeof(int));
	printf("Size of a double: %lu bytes \n", sizeof(double));
	printf("Size of a long int: %lu bytes \n", sizeof(long int));
	printf("Size of a long long int: %lu bytes \n", sizeof(long long int));
	printf("Size of a float: %lu bytes \n", sizeof(float));
	return (0);
}
