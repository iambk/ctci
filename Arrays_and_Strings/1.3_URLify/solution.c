#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int len;
	scanf("%[^\n]%*c", str);
	scanf("%d", &len);
	
	int i = len - 1;
	int j = strlen(str) - 1;

	while (i >= 0) {
		if (str[i] == ' ') {
			str[j--] = '0';
			str[j--] = '2';
			str[j--] = '%';
		}
		else {
			str[j--] = str[i];
		}
		i--;
	}

	printf("%s\n", str);
	return 0;
}
