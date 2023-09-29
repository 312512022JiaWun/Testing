#include<stdio.h>
#include<math.h>
int main(){
  float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
  float term1 = (b * b) - 4 * a * c;
	float first_term = (- b / (2 * a));
	if (term1 > 0){
    float second_term = (sqrt(term1) / (2 * a));
		printf("x1 = %f, x2 = %f", first_term + second_term, first_term - second_term);
	}
	else if (term1 == 0){
    printf("x = %f", first_term);
	}
	else{
    float second_term = (sqrt(-term1) / (2 * a));
    printf("x1 = %f + %f i, x2 = %f - %f i", first_term, second_term, first_term, second_term);
	}
  return 0;
}
