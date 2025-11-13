#include<iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Masukkan sebuah bilangan (ketik -999 untuk berhenti): ";
        cin >> num;

        if(num != -999) {
            bool prime = true;

            if(num <= 1) {
                prime = false;
            } else {
                for(int i = 2; i*i <= num; i++) {
                    if(num % i == 0) {
                        prime = false;
                        break;
                    }
                }
            }

            if(prime) {
                cout << num << " adalah bilangan prima." << endl;
            } else {
                cout << num << " bukan bilangan prima." << endl;
            }
        }
    } while(num != -999);

    cout << "Terima kasih telah menggunakan program ini." << endl;
    return 0;
}

