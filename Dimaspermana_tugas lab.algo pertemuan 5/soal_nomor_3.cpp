#include <iostream>
using namespace std;

int main() {
  int a, i, j, k;
  cout << "~~ Program C++ Segitiga Bintang ~~" << endl;
  cout << "==================================" << endl;
  cout << endl;
  cout << "input tinggi segitiga: ";
  cin >> a;
  cout << endl;

  for (i = 1; i <= a; i++) {
    for (j = 1; j <= a; j++) {
      cout << "";
    }
    for (k = 1; k <= i; k++) {
      cout << " *";
    }
    cout << endl;
  }
  return 0;
}