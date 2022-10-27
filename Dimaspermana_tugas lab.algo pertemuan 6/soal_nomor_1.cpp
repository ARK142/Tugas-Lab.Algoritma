#include <iostream>
using namespace std;
#include <string.h>

int main() {
  char string[50];

  cout << "Menghitung panjang string inputan" << endl;
  cout << "---------------------------------" << endl;
  cout << "Masukkan String : ";
  cin.getline(string, sizeof(string));

  cout << "\nJumlah String" << endl;

  // menghitung karakter dengan perulangan for
  cout << "> dengan strlen          = " << strlen(string) << " karakter"
       << endl;
  return 0;
}
