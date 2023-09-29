#include<stdio.h>
int main(){
  int game, p1, p2, score_p1 = 0, score_p2 = 0, win_score;
  scanf("%d", &game);
  while((game % 2) == 0){
    printf("please enter the legal number of games:\n");
    scanf("%d", &game);
  }
  win_score = (game / 2) + 1;
  while((score_p1 != win_score) && (score_p2 != win_score)){
    scanf("%d %d", &p1, &p2);
    if((p1 == 2 && p2 == 0) || (p1 == 0 && p2 == 5) || (p1 == 5 && p2 == 2)){
    score_p2++;
  }
    else if((p1 == 2 && p2 == 5) || (p1 == 0 && p2 == 2) || (p1 == 5 && p2 == 0)){
    score_p1++;
    }
  }
  if(score_p1 > score_p2)
    printf("p1 wins!");
  else
    printf("p2 wins!");
  return 0;
}
