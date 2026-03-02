#include <stdlib.h>
#include <stdio.h>

/**
 * @brief recursively calculates the factorial of an integer n.
 * 
 * @param n number to find factorial of.
 * @return int n factorial.
 */
int factorial(int n) {
  // the base case - this determines when the recursion should stop
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

int validate_input(int argc, char **argv) {

//printf("%d\n%c\n%c\n%c\n",argc,*argv[1],*argv[2],*argv[3]);

  // Validate format
  if (argc != 4 || (*argv[2] != 'C' && *argv[2] != 'P')) {
    printf("Usage: ./combinatorials n C r or n P r\n");
    return 0;
  }

  // Validate values
  if (*argv[1] < 0 || *argv[3] < 0 || *argv[1] < *argv[3]) {
    printf("Combinatorial not defined.\n");
    return 0;
  } 

  return 1;
}

int calculate_combinations(n,r) {
  int result;
  result = factorial(n) / (factorial(r) * factorial(n-r));
  return result;
}

int calculate_permutations(n,r) {
  int result;
  result = factorial(n) / factorial(n-r);
  return result;
}

int main(int argc, char **argv) {
  /*
  The program should accept a command line argument as follows:
  ./combinatorials n C r
  ./combinatorials n P r

  where n and r are both positive integers, and r is always less than or equal to n.

  for example:
  ./combinatorials 7 C 2

  Your program should then calculate and print out the correct result

  nCr should return the total combinations of r items out of n.
  This is calculated by: n! / (r! (n - r)!)

  nPr should return the total permutations of r items out of n.
  This is calculated by: n! / (n-r)!

  Add appropriate validation to your program to make your code robust.

  You should try and use functions to write your program.

  */

  if (validate_input(argc, argv)) {

    if (*argv[2] == 'C') {
      printf("%d combinations\n",calculate_combinations(*argv[1],*argv[3]));
    }
    if (*argv[2] == 'P') {
      printf("%d permutations\n", calculate_permutations(*argv[1],*argv[3]));
    }

  }

}