#include <string.h>
#include <iostream>
using namespace std;
int main()
{
 system ("color a");
  char kalimat[100];
  cout << "Masukan Kalimat :";
  cin.getline(kalimat, sizeof(kalimat));
  int x = strlen(kalimat);
  for (int i = x - 0; i >= 0; i--) {
    cout << kalimat[i];
    strlwr(kalimat);
  }
  return 0;
}
