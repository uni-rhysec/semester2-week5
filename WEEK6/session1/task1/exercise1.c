#include <stdio.h>
#include <stdlib.h>




int calculate_fine(int excess_speed, int fine) {
  // Calculate fine based on how much over the limit
    if (excess_speed <= 10) {
      fine = 50;
    } else if (excess_speed <= 20) {
      fine = 100;
    } else {
      fine = 200;
    }

  return fine;
}



int get_speed_limit() {
  // Get user input for speed limit
  char input[50];
  int speed_limit = 0;
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &speed_limit);
  }

  return speed_limit;
}



int get_driver_speed() {
  // Get user input for driver's speed
  char input[50];
  int driver_speed = 0;
  printf("Enter the driver's speed: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &driver_speed);
  }

  return driver_speed;
}


int main() {
  int speed_limit, driver_speed, fine = 0;
  char input[20];

  speed_limit = get_speed_limit();

  driver_speed = get_driver_speed();

  // Determine if the driver is speeding
  if (driver_speed > speed_limit) {
    int excess_speed = driver_speed - speed_limit;
    printf("Fine: $%d\n", calculate_fine(excess_speed, fine));
    
  } else {
    printf("No fine needed.\n");
  }

  return 0;
}