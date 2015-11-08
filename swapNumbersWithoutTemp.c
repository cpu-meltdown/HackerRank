#include <stdio.h>

void swap (int *p1, int *p2){
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
}

int main (){
	int a = 3, b = 4;
	int *p1 = &a, *p2 = &b;
	swap (p1, p2);
	printf ("%d %d", a, b);
	return 0;
}