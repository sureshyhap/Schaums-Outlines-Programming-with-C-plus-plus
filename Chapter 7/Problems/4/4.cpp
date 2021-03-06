#include <iostream>

double riemann_sum(double (*pf)(double x), double a, double b);
double func(double x);

int main(int argc, char* argv[]) {
  std::cout << riemann_sum(&func, 0, 3);
  
  return 0;
}

double riemann_sum(double (*pf)(double x), double a, double b) {
  std::cout << "Enter number of rectangles n: ";
  int n;
  std::cin >> n;

  double h  = (b - a) / n;

  double sum = 0;
  for (int j = 1; j <= n; ++j) {
    sum += (*pf)(a + j * h) * h;
  }
  return sum;
}

double func(double x) {
  return x * x;
}
