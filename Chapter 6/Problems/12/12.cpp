#include <iostream>

void remove(float a[], int& n, int i);

int main(int argc, char* argv[]) {
  float a[] = {33, 66, 44, 77, 22, 11, 88, 11};
  int size = 8;
  remove(a, size, 2);
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }
  
  return 0;
}

void remove(float a[], int& n, int i) {
  for (int j = i; j < n - 1; ++j) {
    a[j] = a[j + 1];
  }
  --n;
}
