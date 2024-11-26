#include <stdio.h>
int main(void)
{
	/*for (int i = 1; i <= 5; i++) {
		printf("窍窍窍 %d\n", i);
	}*/

	/*int i = 1;
	while (i <= 5) {
		printf("客老客老 %d\n", i++);
	}*/

	/*int d = 1;
	do {
		printf("滴客老滴客老 %d\n", d++);
	} while (d <= 5);*/
	
	for (int i = 1; i <= 9; i++) {
		printf("%d窜 拌魂\n", i);
		for (int j = 1; j <= 9; j++) {
			printf(" %d x %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}