#include <stdio.h>
#include "simplycalc.h"
#include "parsefunc.h"

int main(){
  func binomial; // f(x) = 3x^2 + 4x + 1
  binomial.type = 0;
  binomial.params[0] = 1;
  binomial.params[1] = 4;
  binomial.params[2] = 3;
  binomial.buffer = 3;
  func drvt_binomial = drvt(binomial, 1); // f'(x) = 6x + 4
  printf("%f \n", parse(binomial, 5)); // 96
  printf("%f \n", parse(drvt_binomial, 5)); // 34
  return 0;
}
