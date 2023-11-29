#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MOVEMENT_SPEED 2
#define BOBBING_AMOUNT 0.5

int main() {
  int keys = 0;
  float movement = 0;
  float bobbing = 0;

  while (keys != 'q') {
    keys = getch();
    switch (keys) {
      case 'w':
        movement += MOVEMENT_SPEED;
        break;
      case 's':
        movement -= MOVEMENT_SPEED;
        break;
      case 'a':
        movement += MOVEMENT_SPEED * cos(bobbing);
        bobbing += BOBBING_AMOUNT;
        break;
      case 'd':
        movement -= MOVEMENT_SPEED * cos(bobbing);
        bobbing += BOBBING_AMOUNT;
        break;
    }
    printf("%.2f %.2f\n", movement, bobbing);
  }
  return 0;
}
