//assuming only lowercase characters a-z are used.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	scanf("%s %s", str1, str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (len1 != len2) {
		printf("No\n");
		return 0;
	}

	int *count1 = calloc(26, sizeof *count1);
	int *count2 = calloc(26, sizeof *count2);

	for (int var = 0; var < len1; var++) {
		count1[str1[var] - 'a']++;
		count2[str2[var] - 'a']++;
	}


	for (int var = 0; var < 26; var++) {
		if (count1[var] != count2[var]) {
			printf("No\n");
			free(count1);
			free(count2);
			return 0;
		}
	}
	
	printf("Yes\n");
	free(count1);
	free(count2);

	return 0;
}
