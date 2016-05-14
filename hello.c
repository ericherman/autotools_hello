#include <config.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *from = argc > 1 ? argv[1] : PACKAGE_STRING;
	printf("hello, world\n");
	printf("from '%s'\n", from);
	return 0;
}
