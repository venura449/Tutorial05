#include <stdio.h>
int main(void) {
  int i = 0, j = 0;

  for (i = 0; i < 7; i++) {
    for (j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  for (i = 7; i >= 0;i--) {
    if(i%2==0){
    for (j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  }
}

