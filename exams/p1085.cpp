#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int p1085(void) {
	int _school_t, _review_t;
	int _day = 0, _study_hour = 0;

	int total = 0;
	for (int i = 1; i < 8; i++) {
		scanf("%d %d", &_school_t, &_review_t);
		total = _school_t + _review_t;
		if (total > _study_hour) {
			_study_hour = total;
			_day = i;
		}
	}
	printf("%d", _day);

	system("pause");
	return 0;
}