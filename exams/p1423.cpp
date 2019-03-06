#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int p1423(void) {
	float destination;
	float step_length = 2;
	float swimed_length = 0;

	scanf("%f", &destination);
	int n = 0;
	while (swimed_length < destination) {
		n++;
		swimed_length += step_length;
		step_length *= 0.98;
	}
	printf("%d", n);

	system("pause");
	return 0;
}

