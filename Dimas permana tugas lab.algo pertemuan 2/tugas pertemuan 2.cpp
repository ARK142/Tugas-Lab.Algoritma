#include <iostream>
using namespace std;
int main() {
 
  float a, harga = 4500.02, jumlah;
 
  cout << "Masukan jumlah barang =  ";
  cin >> a;
  cout << endl;
 
  jumlah = a *  harga ;
 
  cout << "Yang harus dibayar = "<< jumlah << endl;
 
  return 0;
}