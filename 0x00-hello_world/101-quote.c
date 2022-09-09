<<<<<<< HEAD
#include <stdio.h>
#include <unistd.h>
/**
 *
 * main - print quote*
 *
 * Description: prints Dors's quote
 *
 * Return: Always 1 (Success)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
=======
#include <stdio.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description: prints Dors's quote
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
>>>>>>> 5499d07eb7ae3e546ee4b6b61791c1cbb1bd5b6c
