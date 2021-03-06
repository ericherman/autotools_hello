/* autotools hello: a demonstration of using autotools
   Copyright (C) 2016 Eric Herman <eric@freesa.org>

   This work is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This work is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License and the GNU General Public License for
   more details.

   You should have received a copy of the GNU Lesser General Public
   License (COPYING) and the GNU General Public License (COPYING.GPL3).
   If not, see <http://www.gnu.org/licenses/>.
*/

#include <config.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *from = argc > 1 ? argv[1] : PACKAGE_STRING;
	printf("hello, world\n");
	printf("from '%s'\n", from);
	return 0;
}
