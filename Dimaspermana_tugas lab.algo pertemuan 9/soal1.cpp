#include <iostream>
using namespace std;

int hargaSetelahPajak(int hargaDasar) {
  return hargaDasar + (hargaDasar * 10 / 100);
}

int main() {
  int hargaMawar = 10000;
  int hargaFinalMawar = hargaSetelahPajak(hargaMawar);
  cout << "Harga mawar 1 tangkai Rp." << hargaFinalMawar << endl;
  return 0;
}