#include <stdio.h>
#include <stdint.h>
/**
 *main - print the size of various types
 *
 *Description: A  program that prints the size of various types on the computer
 *it is compiled and run on.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("The size of int8_t is %ld bytes\n", sizeof(int8_t));
	printf("The size of uint8_t is %ld bytes\n", sizeof(uint8_t));
	printf("The size of int16_t is %ld bytes\n", sizeof(int16_t));
	printf("The size of uint16_t is %ld bytes\n", sizeof(uint16_t));
	printf("The size of int32_t is %ld bytes\n", sizeof(int32_t));
	printf("The size of uint32_t is %ld bytes\n", sizeof(uint32_t));
	printf("The size of int64_t is %ld bytes\n", sizeof(int64_t));
	printf("The size of uint64_t is %ld bytes\n", sizeof(uint64_t));
	printf("The size of float is %ld bytes\n", sizeof(float));
	printf("The size of double is %ld bytes\n", sizeof(double));
	printf("The size of long double is %ld bytes\n", sizeof(long double));
	return (0);
}
