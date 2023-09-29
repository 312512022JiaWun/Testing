#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = a + b == 2 ? 0 : a + b;
	int carry = a + b == 2 ? 1 : 0;
	printf("%d %d", carry, sum);
	return 0;
}
