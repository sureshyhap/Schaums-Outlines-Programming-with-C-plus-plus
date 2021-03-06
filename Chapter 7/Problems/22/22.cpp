#include <iostream>

int product(int (*pf)(int x), int n);
int square(int x);

int main(int argc, char* argv[]) {
  std::cout << product(&square, 5);
  
  return 0;
}

int product(int (*pf)(int x), int n) {
  int prod = 1;
  for (int i = 1; i <= n; ++i) {
    prod *= (*pf)(i);
  }
  return prod;
}

int square(int x) {
  return x * x;
}
