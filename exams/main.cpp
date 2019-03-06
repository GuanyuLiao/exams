#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int count(int count_num, int base_num);

int main(void) {
	int n, x;
	int _count = 0;
	
	scanf("%d %d", &n, &x);
	for (int i = 1; i <= n; i++) {
		_count += count(i, x);
	}
	printf("%d", _count); 

	system("pause");
	return 0;
}

int count(int count_num, int base_num) {
	if (count_num == 0) {
		return 0;
	}
	else if(count_num % 10 == base_num) {
		return 1 + count(count_num / 10, base_num);
	}
	else {
		return count(count_num / 10, base_num);
	}
}