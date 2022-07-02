#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
char A = 'A';
int i = 1;

while (i <= 52)
{
if (i <= 26)
{
putchar(a);
a++;
}
else
{
putchar(A);
A++;
}
i++;
}
putchar('\n');
return (0);
}
