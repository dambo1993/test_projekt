#include <stdio.h>
#include "test_lib/libik.h"

int main()
{
	puts("Hello World!");
	
	int a = libik_funkcja(14,16);
	
	printf("Wartosc z funkcji to: %d", a);

	return 0;
}