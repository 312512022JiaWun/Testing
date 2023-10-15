#include<stdio.h>
int main(){
  int m, n, p, q, operation;
  scanf("%d %d %d %d %d", &m, &n, &p, &q, &operation);
  int A[100][100], B[100][100], C[100][100], D[100][100] = {0};
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++)
      scanf("%d", &A[i][j]);
  }
  for(int i = 0; i < p; i++){
    for(int j = 0; j < q; j++)
      scanf("%d", &B[i][j]);
  }

  //addition
  if(operation == 0){
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        C[i][j] = A[i][j] + B[i][j];
        printf("%d", C[i][j]);
        if(j < n - 1)
          printf(" ");
      }
      printf("\n");
    }
  }

  //subtraction
  else if(operation == 1){
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        C[i][j] = A[i][j] - B[i][j];
        printf("%d", C[i][j]);
        if(j < n - 1)
          printf(" ");
      }
      printf("\n");
    }
  }

  //multiplication
  else{
    for(int i = 0; i < m; i++){
      for(int k = 0; k < q; k++){
        for(int j = 0; j < n; j++){
          D[i][k] += A[i][j] * B[j][k];
        }
      }
    }
    for(int i = 0; i < m; i++){
      for(int j = 0; j < q; j++){
        printf("%d", D[i][j]);
        if(i < q - 1)
          printf(" ");
      }
      printf("\n");
    }
  }
  return 0;
}
