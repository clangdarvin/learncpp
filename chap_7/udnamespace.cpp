#include <iostream>

namespace Foo {
int do_something(int x, int y) { return x + y; }
}  // namespace Foo

namespace Goo {
int do_something(int x, int y) { return x - y; }
}  // namespace Goo

int main() { std::cout << Foo::do_something(4, 6) << '\n'; }

// Using namespace prevents naming collisions
