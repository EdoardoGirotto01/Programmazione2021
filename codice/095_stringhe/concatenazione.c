#include <stdio.h>

int main() {
  char a[] = "gian";
  char b[] = "luca";
  char c[20];
  int i, j;
  // copio a in c
  i = 0;
  while (a[i] != '\0') {
    c[i] = a[i];
    i++;
  }

  // copio b in c
  j = 0;
  while (b[j] != '\0') {
    c[i + j] = b[j];
    j++;
  }

  c[i + j] = '\0';
  printf("%s\n", c);
}