#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Input jumlah baris: ";
    cin >> a;
    cout << "Input jumlah kolom: ";
    cin >> b;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
