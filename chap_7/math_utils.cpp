#include "math_utils.h"

#include <stdexcept>
namespace BasicMath {

double addNumbers(int a, int b) { return a + b; }
double subtractNumbers(int a, int b) { return a - b; }
double divideNumbers(int a, int b) {
  if (b == 0) {
    throw std::runtime_error("Divide by zero error");
  }
  return static_cast<double>(a) / b;
}
double multiplyNumbers(int a, int b) { return a * b; }
}  // namespace BasicMath
