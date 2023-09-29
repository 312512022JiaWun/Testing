#include<stdio.h>
#define MAZE_W 5
#define MAZE_H 5
void PrintMaze(int maze[MAZE_H][MAZE_W]);
void Maze_Travel( int maze[MAZE_H][MAZE_W], int row, int col);
int DetectDead(int maze[MAZE_H][MAZE_W], int row, int col);

int main(){
  int x, y, maze[MAZE_H][MAZE_W];
	scanf("%d %d", &x, &y);
	// put maze into array
  for (int i = 0; i < MAZE_H; i ++ ){
    scanf("%d %d %d %d %d", &(maze[i][0]), &(maze[i][1]), &(maze[i][2]), &(maze[i][3]), &(maze[i][4]));
	}
  
	Maze_Travel(maze, x, y);
	
  for (int i = 0 ; i < MAZE_H; i++){
		for (int j = 0; j < MAZE_W; j++){
			if (maze[i][j] == 2 && i >= 0 && i < MAZE_H  && j >= 0 && j < MAZE_W){
    		if ( DetectDead(maze, i, j) == 1){
					printf("x");
				}
				else{
					printf(" ");
				}
			}
			if( maze[i][j] == -1) printf("*");
			if( maze[i][j] == 0 ) printf(" ");
		}
		printf("\n");
	}


  return 0;
}

void PrintMaze(int maze[MAZE_H][MAZE_W]){
  
	for (int i = 0; i < MAZE_H; i ++ ){
	  for (int j = 0; j < MAZE_W; j ++){
			printf("%d  ", maze[i][j]);
		}
		printf("\n");
	}

}

void Maze_Travel(int maze[MAZE_W][MAZE_H], int row, int col){//direction up : 0, down : 1, left : 2, right: 3 
  
	//terminate condition
	if (  row < 0 || row >= MAZE_H || col < 0 || col >= MAZE_W) return; // check whether row can col is in valid range
	if ( maze[row][col] == -1 ) return;
  maze[row][col] = 2;
  if ( maze[row][col + 1] == 0 ) Maze_Travel(maze, row, col + 1);
	if ( maze[row][col - 1] == 0 ) Maze_Travel(maze, row, col - 1);
	if ( maze[row + 1][col] == 0 ) Maze_Travel(maze, row + 1, col);
	if ( maze[row - 1][col] == 0 ) Maze_Travel(maze, row - 1, col);
  return;
}

int DetectDead(int maze[MAZE_W][MAZE_H], int row, int col){
	
	if( row > 0 && row < MAZE_H - 1 && col > 0 && col < MAZE_W - 1){
		if(maze[row - 1][col] == 2 && maze[row + 1][col] == -1 && maze[row][col + 1] == -1 && maze[row][col - 1] == -1) return 1;
  	if(maze[row - 1][col] == -1 && maze[row + 1][col] == 2 && maze[row][col + 1] == -1 && maze[row][col - 1] == -1) return 1;
  	if(maze[row - 1][col] == -1 && maze[row + 1][col] == -1 && maze[row][col + 1] == 2 && maze[row][col - 1] == -1) return 1;
  	if(maze[row - 1][col] == -1 && maze[row + 1][col] == -1 && maze[row][col + 1] == -1 && maze[row][col - 1] == 2) return 1;
  }
	// 4 corner
	if( row == 0 && col == 0 && maze[1][0] == -1 && maze[0][1] == -1) return 1;
	if( row == MAZE_H - 1 && col == 0 && maze[MAZE_H - 2][0] == -1 && maze[MAZE_H - 1][1] == -1) return 1;
	if( row == 0 && col == MAZE_W - 1 && maze[0][MAZE_W - 2] == -1 && maze[1][MAZE_W - 1] == -1) return 1;
	if( row == MAZE_H - 1 && col == MAZE_W - 1 && maze[MAZE_H - 2][MAZE_W - 1] == -1 && maze[MAZE_H - 1][MAZE_W - 2] == -1) return 1;
  // 4 sides
	if(col == 0 && maze[row + 1 ][0] == -1 && maze[row - 1][0] == -1 && maze[row][1] == -1 ) return 1;
	if(row == 0 && maze[0][col + 1] == -1 && maze[0][col - 1] == -1 && maze[1][col] == -1 ) return 1;
	if(col == MAZE_W - 1 && maze[row + 1 ][col] == -1 && maze[row - 1][col] == -1 && maze[row][col - 1] == -1 ) return 1;
	if(row == MAZE_H - 1 && maze[row][col + 1] == -1 && maze[row][col + 1] == -1 && maze[row - 1][col] == -1 ) return 1;


}
