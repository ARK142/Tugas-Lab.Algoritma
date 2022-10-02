#include <iostream>
using namespace std;
int main() {
  string siswa, hadiah;
  int nilai_pertandingan_i, nilai_pertandingan_ii, nilai_pertandingan_iii, rata;

  // input data
  cout << "porgram menghitung rata-rata"<<endl;
  cout << "nama siswa : ";
  cin >> siswa;
  cout << "Nilai Pertandingan I   : ";
  cin >> nilai_pertandingan_i;
  cout << "Nilai Pertandingan II  : ";
  cin >> nilai_pertandingan_ii;
  cout << "Nilai Pertandingan III : ";
  cin >> nilai_pertandingan_iii;

  // proses mencari nilai rata-rata//
  rata =
      (nilai_pertandingan_i + nilai_pertandingan_ii + nilai_pertandingan_iii) /
      3;

  // proses ifelse
  if (rata >= 85) {
    hadiah = "Komputer Core i5";
    cout << endl;
  } else if (rata >= 75) {
    hadiah = "Uang sebesar Rp. 2.500,000";
    cout << endl;
  } else if (rata < 70) {
    hadiah = "Hiburan";
    cout << endl;
  }

  // output
  cout << "=======================================" << endl;
  cout << "Siswa yang bernama " << siswa << endl;
  cout << "Memperoleh nilai rata rata  " << rata;
  cout << " dari hasil perlombaan yang diikutinya." << endl;
  cout << "Hadiah yang didapat adalah " << hadiah << endl;
  getchar();
}
