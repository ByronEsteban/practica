#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Escribir una funci ́on en C para comparar si dos strings son iguales.

bool string_compare(char *s, char *s2, int l){
  int i = 0;
  while (s[i] != 0) {
    if (s[i] != s2[i]) {
      return false;
      break;
    }
    else i++;
  }
  if (i == l) {
    return true;
  } else return false;
}

// bool string_compare(char *s, char *s2, int l){
//   int i = 0;
//   while (s[i] == s2[i]) {
//     i++;
//   }
//   if (i == l) {
//     return true;
//   } else return false;
// }

int main(int argc, char *argv[]) {
  char *s = argv[1];
  char *s2 = argv[2];
  int l = 0;
  while (s2[l] != 0) {
    l++;
  }
  if (string_compare(s, s2, l)) {
    printf("Las palabras %s y %s son iguales\n", s, s2);
  } else printf("Las palabras %s y %s no son iguales\n", s, s2);
  return 0;
}
