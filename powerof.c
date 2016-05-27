#include <stdio.h>

void idiot() {
  printf("idiot!\n");
}

void world() {
  printf("world!\n");
}

void main() {
  printf("Hello ");
  (idiot + 17)();
}
