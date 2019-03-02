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

int random_buy() {
	int _first_num, _second_num, _third_num;
	int _need_num = 0;
	int _cost = INT_MAX;
	int _pencil_bag[3][2];

	int rest_num = 0;
	// ȫ���һ�ְ�װ���������
	int max_first_num = ceil(_need_num / (1.0 * _pencil_bag[0][0]));
	int max_second_num = 0;
	for (_first_num = 0; _first_num <= max_first_num; _first_num++) {
		rest_num = _need_num - _first_num * _pencil_bag[0][0];
		if (rest_num < 0) {
			rest_num = 0;
		}
		// �����һ�ְ�װ��ȫ��ڶ��ְ�װ������
		max_second_num = ceil(rest_num / (1.0 * _pencil_bag[1][0]));
		for (_second_num = 0; _second_num <= max_second_num; _second_num++) {
			rest_num = rest_num - _second_num * _pencil_bag[1][0];
			if (rest_num < 0) {
				rest_num = 0;
			}
			// ʣ�µ�ȫ������ְ�װ
			_third_num = ceil(rest_num / (1.0 * _pencil_bag[2][0]));

			// ����ù��򷽰��Ļ��ѣ�����֮ǰ�Ļ������
			int tmp_cost = _first_num * _pencil_bag[0][1] + _second_num * _pencil_bag[1][1] + _third_num * _pencil_bag[2][1];
			if (tmp_cost < _cost) {
				_cost = tmp_cost;
			}
		}
	}
	printf("%d", _cost);
}