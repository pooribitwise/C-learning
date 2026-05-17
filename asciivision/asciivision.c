#include <stdio.h>

#define MAX_LENGTH 1000
int main(void)
{
	char s[MAX_LENGTH];
	for (int i = 0; i < MAX_LENGTH; i++) {
		s[i] = getchar();
		if (s[i] == EOF) {
			break;
		}
	}
	for (int i = 0; s[i] != EOF; i++) {
		switch (s[i]) {
			case '\n':
				printf("\033[43;93m\\n");
				putchar('\\');
				putchar('n');
				printf("\033[0m");
				break;
			case '\t':
				printf("\033[43;93m\\n");
				putchar('\\');
				putchar('t');
				printf("\033[0m");
				break;
			case ' ':
				printf("\033[43;93m\\n");
				putchar('\\');
				putchar('s');
				printf("\033[0m");
				break;
			default:
				putchar(s[i]);
				break;

		}
	}
	return 0;
}
