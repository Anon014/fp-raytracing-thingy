#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PLATFORM_SIZE 16
#define GRID_SIZE 16

int main() {
  int i, j;
  for (i = 0; i < GRID_SIZE; i++) {
    for (j = 0; j < GRID_SIZE; j++) {
      printf("%d ", i * PLATFORM_SIZE + j);
      if ((i == GRID_SIZE - 1 || j == GRID_SIZE - 1) && i != 0 && j != 0) {
        printf("\n");
      }
    }
  }
  return 0;
}
