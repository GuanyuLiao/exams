#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int p1424(void) {
	int x, n;
	int swimed_length = 0;

	scanf("%d %d", &x, &n);
	for (int i = 0; i < n; i++) {
		int week_day = x + i;
		if (week_day % 7 == 6 || week_day % 7 == 0) {
			continue;
		}
		swimed_length += 250;
	}
	printf("%d", swimed_length);

	system("pause");
	return 0;
}

