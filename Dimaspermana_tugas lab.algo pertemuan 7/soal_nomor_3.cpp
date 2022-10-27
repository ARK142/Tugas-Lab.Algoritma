#include <iostream>
using namespace std;

int main() {
  int nilai[10] = {23, 6, 89, 12, 45, 67, 9, 90, 54, 30};
  int max, min;

  for (int i = 0; i < 10; i++) {
    cout << "data dari baris ke-" << i << " = " << nilai[i];
    cout << endl;
  }
  max = nilai[0];
  min = nilai[0];
  for (int j = 0; j < 10; j++) {
    if (nilai[j] > max) {
      max = nilai[j];
    }
    if (nilai[j] < min) {
      min = nilai[j];
    }
  }
  cout << "\nNilai tertinggi adalah : " << max << endl;
  cout << "Nilai terendah adalah  : " << min << endl;
}