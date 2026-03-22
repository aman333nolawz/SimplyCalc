#include "simplycalc.h"
#include "parsefunc.h"


int factorial(int n){
  int f = 1;
  for (int i = 0; i < n; i++){
    f = f * i;
  }
  return f;
}

func drvt(func f, int order){
  if (f.type == 0){
    for (int i = 0; i < (f.buffer - 1); i++){
      f.params[i] = f.params[i+1] * (i+1);
    }
    f.buffer -= 1;
  }
  return f;
}
