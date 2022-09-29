#include <iostream>
using namespace std;
int main() {
  int menu;
  cout << "masukan nomer menu anda : ";
  cin >> menu;
  if (menu == 1) {
    cout << "cake tape";
  } else if (menu == 2) {
    cout << "bolu kukus";
  } else if (menu == 3) {
    cout << "black forest";
  } else {
    cout << "kue pukis";
  }
  return 0;
}