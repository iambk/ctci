/* ====================
	 The struggle is real
	 ====================	*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);

	int *mat = malloc(sizeof *mat * n * n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d",(mat + i * n + j));
		}
	}
	printf("\n");

	int beg = 0, end = n - 1;
	while (beg < end) {
		int *temp = malloc(sizeof *temp * (end - beg + 1));

		for (int i = end; i >= beg; i--) {
			*(temp + (i - beg)) = *(mat + i * n + end);
			*(mat + i * n + end) = *(mat + beg * n + i);
		}
		
		for (int i = end, j = beg; i >= beg; i--, j++) {
			*(mat + beg * n + i) = *(mat + j * n + beg);
		}

		for (int i = beg; i <= end; i++) {
			*(mat + i * n + beg) = *(mat + end * n + i);
		}

		for (int i = beg, j = (end - beg); i <= end; i++, j--) {
			*(mat + end * n + i) = *(temp + j);
		}

		beg++;
		end--;
		free(temp);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", *(mat + i * n + j));
		}
		printf("\n");
	}
	free(mat);
	
	return 0;
}
