#include <iostream>
using namespace std;

int main() {
  int i, j, n, nilai, b = 0, cari = 0;
  int isi[25];
  cout << "Masukan Banyak Bilangan = ";
  cin >> n;
  cout << "\n" << endl;
  for (i = 0; i < n; i++) {
    cout << "Masukan Indeks ke-" << i << " = ";
    cin >> isi[i];
  }
  cout << "\n\nDeretan Bilangan = ";
  for (j = 0; j < i; j++) {
    cout << isi[j] << " ";
  }
  cout << "\n\nMasukan Bilangan yang akan dicari = ";
  cin >> nilai;
  for (i = 0; i < n; i++) {
    if (nilai == isi[i]) {
      cari = nilai;
      b = i;
    }
  }
  if (nilai == cari) {
    cout << "Bilangan " << nilai << " ditemukan sebanyak " << b
         << "\npada posisi ke = " << b << "\n";
  } else {
    cout << "\n Nilai Yang dicari " << nilai << " "
         << "Tidak ditemukan \n";
  }
}