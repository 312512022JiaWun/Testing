#include<stdio.h>

int main(){
  int quotient, remainder;
	scanf("%d %d", &quotient, &remainder);
	printf("%d %d %d", quotient/remainder, quotient%remainder, (quotient%remainder)%2 == 0 ? 1 : 0);
  return 0;
}
