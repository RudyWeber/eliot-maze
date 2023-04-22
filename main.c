#include <stdlib.h>

#include "maze.h"
#include "render.h"

int main() {
  int playerX = 0;
  int playerY = 2;
  int exitX = WIDTH - 1;
  int exitY = 1;

  char maze[HEIGHT][WIDTH] = {
      "####################", "#  # # #    #       ", "     #    #    # ###",
      "#  # ###########   #", "#  #    #         ##", "#  #    #          #",
      "#  ###########     #", "#      #           #", "#          #       #",
      "####################",
  };

  draw(maze, playerX, playerY, exitX, exitY);

  return EXIT_SUCCESS;
}
