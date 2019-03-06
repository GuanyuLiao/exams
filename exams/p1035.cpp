#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int p1035(void) {
	int K;
	double Sn = 0;

	scanf("%d", &K);
	int n = 0;
	while (Sn < K) {
		n++;
		Sn += 1.0 / n;
	}
	printf("%d", n);

	system("pause");
	return 0;
}

