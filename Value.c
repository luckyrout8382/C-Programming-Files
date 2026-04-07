#include <stdio.h>
int main () {
	int x = 10000;
	double y = 56;
	int *p = &x;
	double *q = &y;
	printf("P & Q are %d & %d", sizeof(p), sizeof(q));
	return 0;
}
