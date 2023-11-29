#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TREE_HEIGHT 10
#define TREE_WIDTH 4
#define TREE_DEPTH 4

int main() {
  int i, j;
  for (i = 0; i < 16; i++) {
    for (j = 0; j < 16; j++) {
      if (i == 0 || i == 15 || j == 0 || j == 15) continue;
      printf("%d ", i * TREE_WIDTH + j);
      if (((i > 0 && i < 15) && (j > 0 && j < 15)) && rand() % 2 == 0) {
        printf("%d ", i * TREE_WIDTH + j + TREE_HEIGHT);
      }
      if (((i > 0 && i < 15) && (j > 0 && j < 15)) && rand() % 2 == 1) {
        printf("%d ", i * TREE_WIDTH + j - TREE_HEIGHT);
      }
      if (i == 15 && j == 15) {
        printf("\n");
      }
    }
  }
  return 0;
}
