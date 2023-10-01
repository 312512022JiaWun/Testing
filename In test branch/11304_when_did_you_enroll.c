#include<stdio.h>
int main(){
  int id;
  scanf("%d",&id);
  printf("your year of admission is %d%d%d", id/100000000, (id%100000000)/10000000, (id%10000000)/1000000);
}
