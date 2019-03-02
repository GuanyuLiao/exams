#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(void) {
	int _buy_num[3];
	int _need_num = 0;
	int _cost = INT_MAX;
	int _pencil_bag[3][2];

	scanf("%d", &_need_num);
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &_pencil_bag[i][0], &_pencil_bag[i][1]);
		_buy_num[i] = ceil(_need_num / (1.0 * _pencil_bag[i][0]));
		int tmp_cost = _buy_num[i] * _pencil_bag[i][1];
		if (tmp_cost < _cost) {
			_cost = tmp_cost;
		}
	}
	printf("%d", _cost);

	system("pause");
	return 0;
}