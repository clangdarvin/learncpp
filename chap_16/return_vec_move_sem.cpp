#include <iostream>
#include <vector>

std::vector<int> doSomething(const std::vector<int>& v) {
  return {v[0] + v[0]};
}

auto main() -> int {
  std::vector<int> data{5};

  std::cout << doSomething(data)[0] << '\n';  // 10
  std::cout << data[0] << '\n';               // 5
}

// For expensive-to-copy types (e.g. std::vector, std::string):
// - Pass by const reference to avoid copying function arguments.
// - Return by value because C++ can:
//     * Elide the copy (copy elision / NRVO), or
//     * Automatically move the returned object if copy elision is not
//     performed.
//
// This provides efficient code while keeping the function interface simple and
// readable.
