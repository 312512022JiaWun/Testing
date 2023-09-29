#include<stdio.h>
int main(){
  float w, l, r;
	scanf("%f %f %f", &w, &l, &r);
	float V = 3.14 * r * r * r * 4 / 3 ;
	float h = V / w / l;
	printf("%f %f", V, h);
  return 0;
}
