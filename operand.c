#include <stdio.h>

int main(){
  int a, b, add, sub, times, division;

  a = 10;
  b = 30;

  add = a + b; // 10 + 30
  sub = b - a; // 30 - 10
  times = a * b; // 10 * 30
  division = b / a; //30 / 10

  printf("足し算の結果 %d\n", add);
  printf("引き算の結果 %d\n", sub);
  printf("掛け算の結果 %d\n", times);
  printf("割り算の結果 %d\n", division);

  return 0;
}
