#include<stdio.h>
int main(){
  int dollars, good_price;
  scanf("%d %d", &dollars, &good_price);
  int remain = dollars - good_price;
  printf("$1000x%d\n", remain/1000);
  printf("$500x%d\n", (remain%1000)/500);
  printf("$100x%d\n", (remain%500)/100);
  printf("$50x%d\n", (remain%100)/50);
  printf("$10x%d\n", (remain%50)/10);
  printf("$1x%d", (remain%10));
  return 0;
}
