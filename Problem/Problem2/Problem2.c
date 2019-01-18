#include <stdio.h>

int main() {
	int sum = 0;
	int fi, bi = 1, i = 1;

	while(i <= 4000000) {
		fi = bi + i;
		if (fi % 2 == 0) {
			sum += fi;
		}
		bi = i;
		i = fi;
	}
	printf("%d", sum);

	return 0;
}
