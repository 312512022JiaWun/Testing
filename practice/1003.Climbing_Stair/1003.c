#include<stdio.h>
int ClimbStair(int n);
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", ClimbStair(n));
  return 0;
}

int ClimbStair(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	return  ClimbStair(n - 1)  + ClimbStair(n - 2);
}
