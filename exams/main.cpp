#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int _rest_money = 0, _save_money = 0;
	int _budget[13];

	int month;
	for (month = 1; month < 13; month++) {
		scanf("%d", &_budget[month]);
	}

	for (month = 1; month < 13; month++) {
		_rest_money += 300;
		if (_rest_money < _budget[month]) {
			printf("-%d", month);
			break;
		}
		int tmp = (_rest_money - _budget[month]) / 100;
		_rest_money -= _budget[month];
		_rest_money -= 100 * tmp;
		_save_money += 100 * tmp;
	}
	if (month >= 13) {
		printf("%d", int(_save_money * 1.2) + _rest_money);
	}

	system("pause");
	return 0;
}