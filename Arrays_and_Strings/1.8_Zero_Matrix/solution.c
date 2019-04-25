#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	int *mat = malloc(sizeof *mat * m * n);	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", (mat + i * n + j));
		}
	}

	int *rows = calloc(m, sizeof *rows);
	int *cols = calloc(n, sizeof *cols);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (*(mat + i * n + j) == 0) {
				*(rows + i) = 1;
				*(cols + j) = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (*(rows + i) == 1 || *(cols + j) == 1) {
				*(mat + i * n + j) = 0;
			}
		}
	}

	printf("\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", *(mat + i * n + j));
		}
		printf("\n");
	}

	free(mat);
	free(rows);
	free(cols);

	return 0;
}


