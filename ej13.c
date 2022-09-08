#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//Escribir una funci ́on en C que devuelva true si el string que acepta como argumento es pal ́ındromo.

bool stringalreves(char *s, int l){
  l--;
  char a[l];
  int i = 0;
  while(l != -1) {
    a[i] = s[l];
    printf("%c\n", a[l]);
    l--;
    i++;
  }
  printf("%s\n", a);
  if (!strcmp(s,a)) {
    return true;
  } else return false;
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  int l = 0;
  while (s[l] != 0) {
    l++;
  }
  if (stringalreves(s,l)) {
    printf("La palabra %s es un palíndromo\n", s);
  } else
  printf("La palabra %s no es un palíndromo\n", s);
  return 0;
}
