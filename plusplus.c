#include <stdio.h>

// https://www.inf.ethz.ch/personal/wirth/Articles/GoodIdeas.pdf
void main() {
  int x = 0, y = 0;
  int a = x++ + ++y+1==++x+ ++y;
  int b = x+++y++==x+++ ++y+1;
  int c = x+++ ++y;
  putchar(65+x+y+a+b+c);
}
