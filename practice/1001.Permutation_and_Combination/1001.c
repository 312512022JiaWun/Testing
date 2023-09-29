#include<stdio.h>
int Factorial(int n);
int Permutations(int n, int k);
int Combinations(int n, int k);

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
  printf("%d\n%d", Permutations(n, k), Combinations(n, k));
  return 0;
}

int Factorial(int n){
  if (n == 0) return 1;
  return n * Factorial (n - 1);
}

int Permutations(int n, int k){
  return Factorial(n) / Factorial(n-k);
}

int Combinations(int n, int k){
  return Permutations(n, k) / Permutations(k, k);
}
