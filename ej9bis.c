#include <stdio.h>
#include <stdlib.h>
//Escribir una funci ́on en C para pasar un string a may ́usculas.

int to_upper_case(char *s){
  int i = 0;
  while (s[i] != 0) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = s[i] -32;
      i++;
    }
  }
}

int main(int argc, char *argv[]) {
  char *s = argv[1];
  printf("La palabra %s ahora quedó ", s);
  to_upper_case(s);
  printf("%s\n", s);
  return 0;
}
