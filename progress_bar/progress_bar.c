#include <stdio.h>

int main (void) {
	for (int prg = 0; prg <= 100; prg++) {
		putchar('\r');
		putchar('[');
		for (int bar = 0; bar <= 50; bar++) {
			if (bar <= prg/2)
				putchar('=');
			else if ((prg % 2 == 1) && (bar == prg/2 + 1))
				putchar('-');
			else
				putchar(' ');
			for(int i=0; i < 1000000; i++);
		}
		printf("]\t%d%%", prg);
		fflush(stdout);
	}
	putchar('\n');
}
