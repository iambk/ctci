#include <stdio.h>
#include <string.h>

int main() {
	char s1[100], s2[100];
	scanf("%s %s", s1, s2);

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 == len2 && len1) {
		char s1s1[len1];
		strcpy(s1s1, s1);
		strcat(s1s1, s1);

		char *ptr = strstr(s1s1, s2);

		if (ptr == NULL)
			printf("No\n");
		else 
			printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}
