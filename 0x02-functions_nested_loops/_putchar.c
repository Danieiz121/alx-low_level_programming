#include <unistd.h>
/**
 * _putchar - writes the charater c to stdout
 * @c: The charater to print
 * Return: On Success 1.
 * On error, -1 is eeturned, and error is set approperiately
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
