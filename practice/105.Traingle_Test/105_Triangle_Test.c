#include<stdio.h>
int main(){
  int side1, side2, side3;
	scanf("%d %d %d", &side1, &side2, &side3);
	int condition1 = (side1 + side2 > side3) ? 1 : 0;
	int condition2 = (side2 + side3 > side1) ? 1 : 0;
	int condition3 = (side3 + side1 > side2) ? 1 : 0;
  printf("%d\n", (condition1 + condition2 + condition3) / 3);
  return 0;
}
