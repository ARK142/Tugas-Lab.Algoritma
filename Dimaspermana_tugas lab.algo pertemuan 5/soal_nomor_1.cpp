#include <iostream>
using namespace std;
int main() {
  int a, b;

  for (a = 1; a <= 5; a++) {
    cout << endl;
    for (b = 5; b <= 10; b++)
      cout << a << " ";
  }
  getchar();
}