#include <ctype.h>
#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char a1[20];
  char a2[20];
  // clrscr();
  cout << "kalimat - 1 = ";
  cin >> a1;
  cout << "kalimat- 2 = ";
  cin >> a2;
  strcat(a1, a2);
  cout << "menjadi " << a1;
  getchar();
}