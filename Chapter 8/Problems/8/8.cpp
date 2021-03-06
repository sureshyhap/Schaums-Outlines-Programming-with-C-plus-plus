#include <iostream>
#include <cstring>

char* strchr(char* s, char c);

int main(int argc, char* argv[]) {
  char s1[] = "Hello";
  std::cout << strchr(s1, 'l') - s1;
  
  return 0;
}

char* strchr(char* s, char c) {
  int i = 0;
  int len = strlen(s);
  for (; s[i] != c; ++i) {
    if (i == len) {
      return NULL;
    }
  }
  return s + i;
}
