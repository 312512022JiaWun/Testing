#include<stdio.h>
int main(){
	float a1, b1, c1, a2, b2, c2;
	scanf("%f %f %f", &a1, &b1, &c1);
	scanf("%f %f %f", &a2, &b2, &c2);
	float x = ((c1 * b2) - (b1 * c2)) / ((a1 * b2) - (b1 * a2));
	float y = ((a1 * c2) - (c1 * a2)) / ((a1 * b2) - (b1 * a2));
	printf("%f %f", x, y);
	return 0;
}
