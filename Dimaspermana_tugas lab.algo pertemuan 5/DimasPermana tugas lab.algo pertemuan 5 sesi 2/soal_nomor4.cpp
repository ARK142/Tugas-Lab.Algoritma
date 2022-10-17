/* ----------------------------- */
/* Perulangan FOR dengan break; */
/* ----------------------------- */
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int a = 3, b = 2, c = 1, bil;
  cout << "Bil-A | Bil-B | Bil-C\n";
  cout << "-------------------------";
  for (bil = 1; bil <= 10; ++bil) {
    a += b;
    b += c;
    c += 2;
    printf("\n%d \t| %d \t| %d", a, b, c);
    if (c == 13)
      break;
  }
  getchar();
}
