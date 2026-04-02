int main() {
  char a{'q'};          // non-const expression
  const int b{0};       // const expression
  const double c{5.0};  // non-const expression
  const int d{a * 2};   // non-const expression
  // int e{c + 1.0};        // non-const expression
  const int h{};  // const expression
  return 0;
}
