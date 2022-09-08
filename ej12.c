#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Escribir una funci ́on en C para invertir el orden de un string.

char stringalreves(char *s, int l){
  l--;
  while (l != -1) {
    printf("%c", s[l]);
    l--;
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  int l = 0;
  while (s[l] != 0) {
    l++;
  }
  printf("La palabra %s ahora quedó ", s);
  stringalreves(s, l);
  return 0;
}
