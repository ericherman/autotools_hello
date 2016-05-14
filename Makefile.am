bin_PROGRAMS=hello
hello_SOURCES=hello.c

AM_CFLAGS=-std=c89 -ggdb -Wall -Wextra -Wpedantic -Werror

# extracted from https://github.com/torvalds/linux/blob/master/scripts/Lindent
LINDENT=indent -npro -kr -i8 -ts8 -sob -l80 -ss -ncs -cp1 -il0

tidy:
	$(LINDENT) \
		-T FILE \
		-T size_t \
		*.h *.c
