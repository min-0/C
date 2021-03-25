#include <stdio.h>

int main()
{
	char *ptr, note[] = "See you at the snack bar!";

	ptr = note;
	puts(ptr);
	ptr++;
	puts(++ptr);
	note[7] = '!';
	note[8] = '\0';
	puts(note);
}