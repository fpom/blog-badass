#include "badass.h"
#include <string.h>

int main (void) {
  char TEST[] = STR;
  assopen("run.ass");
  FUN(TEST);
  int _cmp = strcmp(TEST, RESULT);
  assess(test, _cmp == 0);
}
