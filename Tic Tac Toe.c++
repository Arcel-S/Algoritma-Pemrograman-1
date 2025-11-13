#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    
    cout << endl;

    cout << "Tic Tac Toe" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if ((i + j) % 2 == 0) {
                cout << "x ";
            } else {
                cout << "o ";
            }
        }
        cout << endl;
    }

    return 0;
}

