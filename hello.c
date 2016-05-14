#include <config.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("hello, world\n");
	printf("from '%s'\n", PACKAGE_STRING);
	return 0;
}
