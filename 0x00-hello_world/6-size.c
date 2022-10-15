#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	print("Size of char: %lu byte(S)\n" sizeof(char));
	print ("Size of int: %lu byte(S)\n" sizeof(int));
	printf("Size of long int: %lu byte(S)\n" sizeof(long int));
	printf("Size of long long : %lu byte(S)\n" sizeof(long long int));
	printf("Size of floa: %lu byte(S)\n" sizeof(float));
}
