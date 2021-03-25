#include <stdio.h>
#include <string.h>

int main()
{
	char *ptr, word[] = "Bye!";

	ptr = word + strlen(word);

	while (--ptr >= word)
	{
		puts(ptr);
	}
}