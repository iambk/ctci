/*
	 Count is assumed to be less than 100 according to the string length
	 For dynamic string lengths, number of digits in count should be calculated inorder to pass size parameter to snprintf
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	scanf("%s", str);

	int len = strlen(str);
	char compressed[len];

	compressed[0] = str[0];
	int count = 1, j = 1;
	for (int i = 1; i < len; i++) {
		if (str[i] != str[i-1]) {
			if (count > 9) {
				j += snprintf(&compressed[j], 2*sizeof(int), "%d", count);
			}
			else {
				compressed[j++] = count + '0';
			}
			compressed[j++] = str[i];
			count = 1;
		}
		else 
			count++;
	}
	compressed[j++] = count + '0';
	compressed[j] = '\0';

	if (strlen(compressed) >= len)
		printf("%s\n", str);
	else
		printf("%s\n", compressed);

	return 0;
}
