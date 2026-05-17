#include <stdio.h>
#include <ctype.h>

int main (int argc, char **argv)
{
	if (argc > 1) {
		if (argv[1][0] == '-' && argv[1][2] == '\0') {
			char c;
			switch (argv[1][1]) {
				case 'u':
					while ((c = getchar()) != EOF) {
						putchar(islower(c) ? toupper(c) : c);
					}
					break;
				case 'l':
					while ((c = getchar()) != EOF) {
						putchar(isupper(c) ? tolower(c) : c);
					}
					break;
				default:
					goto error;
			}
		} else
			goto error;
	} else {
error:
		fprintf(stderr, "correct option is required\n");
		return 2;
	}
	return 0;
}
