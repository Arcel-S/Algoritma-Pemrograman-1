#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "##  Program C++ Perkalian Matriks 2x2  ##" << endl;
  cout << "=========================================" << endl;
  cout << endl;

  int matriksA[2][2], matriksB[2][2], matriksHasil[2][2], i, j, k;

  // Inisialisasi Matriks A dan B
  matriksA[0][0] = 1;
  matriksA[0][1] = 2;
  matriksA[1][0] = 3;
  matriksA[1][1] = 4;

  matriksB[0][0] = 5;
  matriksB[0][1] = 6;
  matriksB[1][0] = 7;
  matriksB[1][1] = 8;

  // tampilkan isi matriksA
  cout << "Matriks A: " << endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << setw(3) << matriksA[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // tampilkan isi matriksB
  cout << "Matriks B: " << endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << setw(3) << matriksB[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // proses perhitungan matriksA * matriksB
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      // >>> PERBAIKAN: Inisialisasi elemen matriksHasil[i][j] ke 0
      matriksHasil[i][j] = 0;
      for(k = 0; k < 2; k++){
        matriksHasil[i][j] = matriksHasil[i][j] + (matriksA[i][k] * matriksB[k][j]);
      }
    }
  }

  // tampilkan isi matriksHasil
  cout << "Matriks A * Matriks B: " << endl;
  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 2; j++){
      cout << matriksHasil[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}