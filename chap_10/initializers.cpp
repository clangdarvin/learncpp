#include <iostream>
namespace {
void foo(int i) {}
}  // namespace

int main() {
  constexpr double d{5.0};
  foo(static_cast<int>(d));

  unsigned int u{5};
  float g{1.5};
  constexpr int n{5};
  double e{n};
  short s{5};
  return 0;
}

// Best practice: avoid narrowing conversions, since it's unavoidable use
// static_cast
