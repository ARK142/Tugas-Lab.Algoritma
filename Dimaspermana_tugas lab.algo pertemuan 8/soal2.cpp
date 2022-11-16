#include <iostream>
#include <string>
using namespace std;
int main() {
  int x, a, ulangi;
  char jenis[6] = {'D', 'd', 'P', 'p', 'S', 's'};
  string ket[6];
  long bapot[6], jumhar[6] = {0}, hasat[6] = {2500, 2000, 1500};
  long jumbar[6] = {0}, pajak[6], totba[6];

  cout << "GEROBAK FRIED CHICKEN\n";
  cout << "---------------------\n";
  cout << "Kode Jenis Harga\n";
  cout << "---------------------\n";
  cout << " [D] Dada  Rp. 2500\n";
  cout << " [P] Paha  Rp. 2000\n";
  cout << " [S] Sayap Rp. 1500\n\n";
  cout << "---------------------\n\n";
  cout << "Banyak Jenis : ";
  cin >> x;
  jumbar[x] = 0;
  if (x <= 0) {
    cout << "\nBanyak Jenis Tidak Boleh Null";
  } else {
    for (a = 1; a <= x; ++a) {
      cout << "Jenis Ke - " << a;
      cout << "\nJenis Potong [D/P/S] : ";
      cin >> jenis[a];
      cout << "Banyak Potongan : ";
      cin >> bapot[a];
      cout << "------------------------\n";
      if (jenis[a] == 'D' || jenis[a] == 'd') {
        ket[a] = "Dada ";
        hasat[a] = 2500;
      } else if (jenis[a] == 'P' || jenis[a] == 'p') {
        ket[a] = "Paha ";
        hasat[a] = 2000;
      } else if (jenis[a] == 'S' || jenis[a] == 's') {
        ket[a] = "Sayap";
        hasat[a] = 1500;
      } else {
        cout << "\nAnda Salah Masukan Kode Jenis Potongan.";
        hasat[a] = 0;
      }
      jumhar[a] = hasat[a] * bapot[a];
      jumbar[x] = jumbar[x] + hasat[a] * bapot[a];
      if (jumbar[x] == 0) {
        pajak[x] = 0;
        totba[x] = 0;
      } else {
        pajak[x] = jumbar[x] * 0.1;
        totba[x] = jumbar[x] + pajak[x];
      }
    }
  }
  cout << "\n\nGEROBAK FRIED CHICKEN\n";
  cout << "------------------------------------------------\n";
  cout << "No.| Jenis     | Harga     | Banyak | Jumlah\n";
  cout << "   | Potong    | Satuan    | Beli   | Harga\n";
  cout << "================================================\n";
  for (a = 1; a <= x; ++a) {
    cout << " " << a << " | " << ket[a] << "     | " << hasat[a];
    cout << "      | " << bapot[a] << "      | Rp. " << jumhar[a] << endl;
  }
  cout << "------------------------------------------------\n";
  cout << "\t\t\t\tJumlah Bayar  Rp. " << jumbar[x] << endl;
  cout << "\t\t\t\tPajak 10%     Rp. " << pajak[x] << endl;
  cout << "\t\t\t\tTotal Bayar   Rp. " << totba[x];
  getchar();
}