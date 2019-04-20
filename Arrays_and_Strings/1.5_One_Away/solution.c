#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char str1[100], str2[100];
	scanf("%s %s", str1, str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (abs(len1 - len2) > 1) {
		printf("false\n");
		return 0;
	}

	int edits = 0;
	int i = 0, j = 0;
	while ((i < len1) && (j < len2)) {
		if (str1[i] != str2[j]) {
			edits++;
			if (len1 == len2) {
				i++;
				j++;
			}
			else if (len1 > len2) i++;
			else j++;
		}
		else {
			i++;
			j++;
		}
	}

	if (edits <= 1)
		printf("true\n");
	else 
		printf("false\n");

	return 0;
}

