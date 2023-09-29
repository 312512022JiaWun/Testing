#include<stdio.h>
#define ARRAYSIZE 15
int main(){
  int carry = 0, sum = 0, num1[ARRAYSIZE], num2[ARRAYSIZE], result[ARRAYSIZE + 1];
	for (int i = 0; i < ARRAYSIZE; i++){
		scanf("%d", &(num1[i]));
	}
	for (int i = 0; i < ARRAYSIZE; i++){
		scanf("%d", &(num2[i]));
	}  
	for (int i = ARRAYSIZE - 1; i > -1; i--){
    sum = num1[i] + num2[i] + carry > 9 ? (num1[i] + num2[i] + carry) - 10 : num1[i] + num2[i] + carry;
		carry = num1[i] + num2[i] + carry > 9 ? 1 : 0;
    result[i + 1] = sum;
	}
	result[0] = carry == 1 ? 1 : 0;
	for (int i = result[0] == 1 ? 0 : 1; i < ARRAYSIZE + 1; i++){
	  printf("%d", result[i]);
	}
  return 0;
}
