#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
  for (double b = 3, x = 0; x < 2; x += .2) {
    std::cout << x << '\t' << pow(b, x) << '\t' << exp(x * log(b)) << '\n';
  }

  return 0;
}





