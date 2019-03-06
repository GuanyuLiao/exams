#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

bool check_number(int num[]);
void split_number(int arr[], int number);

int p1008(void) {
	int num[3] = { 0 };
	//百位
	for (int first_num = 1; first_num < 4; first_num++) {
		//十位
		for (int second_num = 1; second_num < 10; second_num++) {
			if (second_num == first_num) {
				continue;
			}
			//个位
			for (int third_num = 1; third_num < 10; third_num++) {
				if (third_num == second_num || third_num == first_num) {
					continue;
				}
				num[0] = first_num * 100 + second_num * 10 + third_num;
				num[1] = num[0] * 2;
				num[2] = num[0] * 3;

				if (num[2] >= 1000) {
					continue;
				}

				if (check_number(num)) {
					printf("%d %d %d\n", num[0], num[1], num[2]);
				}
			}
		}
	}

	system("pause");
	return 0;
}

bool check_number(int num[]) {
	int check_arr[10];
	bool flag = true;
	memset(check_arr, 0, 10 * sizeof(int));
	for (int i = 0; i < 3; i++) {
		split_number(check_arr, num[i]);
	}
	for (int i = 1; i < 10; i++) {
		if (check_arr[i] == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

void split_number(int arr[], int number) {
	int first = number / 100;
	int second = (number - first * 100) / 10;
	int third = number % 10;
	arr[first] = 1;
	arr[second] = 1;
	arr[third] = 1;
}