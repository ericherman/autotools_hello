bin_PROGRAMS=hello
hello_SOURCES=hello.c

EXTRA_DIST=COPYING.GPL3

AM_CFLAGS=-std=c89 -pipe -ggdb -O2 -fomit-frame-pointer -Wall -Wextra -Wpedantic -Werror

# extracted from https://github.com/torvalds/linux/blob/master/scripts/Lindent
LINDENT=indent -npro -kr -i8 -ts8 -sob -l80 -ss -ncs -cp1 -il0

tidy:
	$(LINDENT) \
		-T FILE \
		-T size_t \
		*.h *.c
