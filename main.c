#include <curses.h>
#include <unistd.h>

#include "stack.h"

#define WIN_WIDTH 50
#define WIN_HEIGHT 20
#define X_OFFSET = 3;
#define Y_OFFSET = 3;

typedef struct coords {
  int x;
  int y;
} coord;

enum {Wall, Empty} board[WIN_WIDTH][WIN_HEIGHT];

void generateMaze(coord start){
  // I want to use the recursive backtracking algorithm for this.

}

void drawMaze() {
  int w;
  int h;
  for (w = 0; w < WIN_WIDTH; w++){
    for (h = 0; h < WIN_HEIGHT; h++){
      if (board[w][h] == Wall){
        addch(' ' | A_REVERSE);
      }
    }
  }
}

void setupBoard(){
  int w;
  int h;
  for (w = 0; w < WIN_WIDTH; w++){
    for (h = 0; h < WIN_HEIGHT; h++){
      board[w][h] = Wall;
    }
  }
  drawMaze();
}

int main(void) {
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);
  resizeterm(WIN_HEIGHT, WIN_WIDTH);
  setupBoard();
  refresh();
  sleep(4);
  clrtoeol();
  refresh();
  endwin();
}
