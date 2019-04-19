//assuming only lowercase characters [a-z] are used.

#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100];
	scanf("%s", str);

	int *count = calloc(26, sizeof *count);

	for (int var = 0; str[var]; var++) 
		count[str[var] - 'a']++;

	for (int var = 0; var < 26; var++) 
		if (count[var] > 1) {
			printf("No\n");
			free(count);
			return 0;
		}

	printf("Yes\n");
	free(count);
	return 0;
}
