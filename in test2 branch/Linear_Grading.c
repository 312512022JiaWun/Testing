#include<stdio.h>
int main(){
	int original_score = 0;
	scanf("%d", &original_score);
	if(original_score < 0 || original_score > 100) 
	  printf("Invalid input");
	else if (original_score == 0) 
	  printf("%d", original_score);
	else 
	  printf("%d", (original_score / 2) + 55 > 100 ? 100 : (original_score / 2) + 55);
  return 0;
}
