#include <iostream>

int fact(int n);
int permutation(int n, int k);
int combination(int n, int k);

int main(int argc, char* argv[]) {
  std::cout << "Enter n and k for combination: ";
  int n, k;
  std::cin >> n >> k;
  std::cout << "C(" << n << ", " << k << ") = "
	    << combination(n, k) << '.';
  
  return 0;
}

int fact(int n) {
  int product = 1;
  for (; n > 1; --n) {
    product *= n;
  }
  return product;
}

int permutation(int n, int k) {
  int product = 1;
  int i = n;
  while (i > n - k) {
    product *= i--;
  }
  return product;
}

int combination(int n, int k) {
  return permutation(n, k) / fact(k);
}
