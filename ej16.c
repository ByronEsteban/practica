#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int array_max(int a[], int l){
  int max = INT_MIN;
  for (int i = 0; i < l; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int main(void) {
  int a[] = {1,2,3,4,6,2,1,4,8,6,3};
  for (int l = 0; a[l] ; l++) {
    printf("Jay %d\n", l);
  }
  return 0;
}
