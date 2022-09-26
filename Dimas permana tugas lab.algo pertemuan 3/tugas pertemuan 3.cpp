#include <iostream>
using namespace std;
int main() {
  float luas, luas_2, jari_jari, pi = 3.14, tinggi;
  
  cout << "masukan jari-jari : ";
  cin >> jari_jari;
  
  cout << "masukan tinggi : ";
  cin >> tinggi;
  //luas lingkaran
  luas = pi * jari_jari * jari_jari;
  //luas tanbung
  luas_2 = 2 * pi * jari_jari * tinggi;
  
  cout << endl;

  cout << "hasil dari luas lingkaran adalah = " << luas << endl;
  
  cout << "hasil dari luas tabung adalah = " << luas_2 << endl;

  return 0;
}