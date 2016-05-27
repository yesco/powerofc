#include <stdio.h>

void idiot() {
  printf("idiot!\n");
}

int world() {
  printf(" world!\n");
  return 3+4;
}

void main() {
  printf("Hello");
  (idiot + 17)();
  (idiot + 42)();
}
