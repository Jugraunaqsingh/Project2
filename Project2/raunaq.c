//print hollow rectangle


#include <stdio.h>
int main() {
	int i, j, n, m;
	printf("height of the square");
	scanf_s("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (i == 0 || i == n - 1) {
				printf("*\t");
			}
			else {
				if (j == 0 || j == m - 1) {
					printf("*\t");
				}
				else {
					printf("\t");
				}
			}
		}
		printf("\n");
	}

	return 0;

}
