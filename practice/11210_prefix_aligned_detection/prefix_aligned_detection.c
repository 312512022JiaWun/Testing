#include<stdio.h>
#define arraysize 5
int main(){
	int flip[arraysize], binary_string[arraysize] = {0}, if_prefix_aligned = 1, count = 0;
	for(int i = 0; i < arraysize; i++){
		scanf("%d", &flip[i]);
	}
	for(int i = 0; i < arraysize; i++){
		binary_string[flip[i] - 1] = 1;
		if_prefix_aligned = 1;
		for(int j = 0; j < flip[i] ; j++){
			if(binary_string[j] == 0){
				if_prefix_aligned = 0;
			}
		}
		if(if_prefix_aligned == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}
