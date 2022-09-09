# include <stdio.h>
/**
* main - where program starts
* Description: prints out lowercase and uppercase letters ,
* i made use of  the ascii values
* to generate the output
* Return: 0
*/
int main(void)
{
int lower;
int upper;

for (lower = 97; lower <= 122; lower++)
{
	putchar(lower);
}
for (upper = 65; upper <= 90; upper++)
{
	putchar(upper);
}
putchar('\n');

return (0);
}
