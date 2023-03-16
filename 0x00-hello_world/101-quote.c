#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: Always 0 (Success)
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, sizeof(quote) - 1);
return 0;
}
