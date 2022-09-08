#include <stdio.h>
#include <stdlib.h>
//Escribir una funci ́on en C para contar los caracteres en un string.

int count_char(char *s){
  int i = 0;
  while (s[i] != 0) {
    i++;
  }
  return i;
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  printf("La palabra %s tiene %d letras\n", s, count_char(s));
  return 0;
}
