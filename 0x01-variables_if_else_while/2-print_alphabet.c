#include <stdio.h>
#include <ctype.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int lowerCase = "a";
while (lowerCase <= "z")
{
putchar(lowerCase);
lowerCase += 1;
}
putchar("\n");
return (0);
}
