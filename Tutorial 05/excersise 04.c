#include <stdio.h>

int main(void) {

  //Assigining Variables
  int i = 0, j = 0;

  //first half
  for (i = 0; i < 7; i++) {
    for (j = 0; j <= i; j++) {
    	
      printf("*");
    }
    printf("\n");
  }

  //second half
  for (i = 7; i > 0; i -= 2) {
    for (j = 0; j < i; j++) {
    	
      printf("*");
    }
    printf("\n");
  }
}

