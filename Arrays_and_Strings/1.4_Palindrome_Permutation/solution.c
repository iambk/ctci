#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char str[100];
	scanf("%[^\n]%*c", str);

	for (int var = 0; str[var]; var++) {
		str[var] = tolower(str[var]);
	}

	int *count = calloc(26, sizeof *count);

	int len = 0;
	for (int var = 0; str[var]; var++) {
		if (str[var] != ' ') {
			count[str[var] - 'a']++;
			len++;
		}
	}

	int oddcount = 0;
	for (int var = 0; var < 26; var++) {
		if (count[var] & 1) {
			oddcount++;
		}
	}

	if (len & 1) {
		if (oddcount == 1)
			printf("True\n");
		else 
			printf("False\n");
	}
	else {
		if (oddcount == 0)
			printf("True\n");
		else 
			printf("False\n");
	}

	free(count);
	return 0;
}
