#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int p1422(void) {
	int _elec_used;
	float cost = 0.0;

	scanf("%d", &_elec_used);

	if (_elec_used >= 0 && _elec_used <= 10000) {
		if (_elec_used <= 150) {
			cost = _elec_used * 0.4463;
		}
		else if (_elec_used <= 400) {
			cost = 150 * 0.4463 + (_elec_used - 150) * 0.4663;
		}
		else {
			cost = 150 * 0.4463 + 250 * 0.4663 + (_elec_used - 400) * 0.5663;
		}
	}

	printf("%.1f", cost);

	system("pause");
	return 0;
}