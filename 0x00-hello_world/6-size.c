#include <stdio.h>
/**
 * main-Entry
 * Return:0 if no errors, return non zero if errors
 */
int main(void)
{
	printf("Size of a char: %i byte($)\n", sizeof(char));
	printf("Size of a int: %i byte($)\n", sizeof(int));
	printf("Size of a long int: %i byte($)\n", sizeof(long int));
	printf("Size of a long long int: %i byte($)\n", sizeof(long long int));
	printf("Size of a float: %i byte($)\n", sizeof(float));
	return (0);
}
