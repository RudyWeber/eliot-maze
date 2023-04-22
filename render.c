#include <stdio.h>

#include "render.h"
#include "maze.h"

void
draw(char maze[HEIGHT][WIDTH], int playerX, int playerY, int exitX, int exitY) {
  for (int y = 0; y < HEIGHT; y++) {
      for (int x = 0; x < WIDTH; x++) {
        if (x == playerX && y == playerY) {
          printf("@");
        } else if (x == exitX && y == exitY) {
          printf("O");
        } else {
          printf("%c", maze[y][x]);
        }
      }
      printf("\n");
  }
}
