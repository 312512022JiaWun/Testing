#include <stdio.h>
#define size 100
int main() {
  int a[size];
	int index = 0;
	// scanf 
	while ( scanf("%d", &(a[index])) != EOF){
		scanf("%d", &(a[index]));
		index += 1;
	}
	// print input values
	for (int i = 0; i < index; i ++){
		printf("%d ", a[i]);
	}	
  return 0;
}  
