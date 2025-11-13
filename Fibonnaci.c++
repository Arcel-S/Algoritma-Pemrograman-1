#include<iostream>
using namespace std;

int main() {
    int n;
    int a = 0; 
    int b = 1;

    cout << "Masukkan jumlah bilangan dalam barisan Fibonacci yang ingin ditampilkan : ";
    cin >> n;

    cout << "Barisan Fibonacci untuk " << n << " bilangan adalah : ";

    if(n <= 0)
        return 0;
    else if(n == 1) {
        cout << a;
        return 0;
    }
    cout << a << " " << b << " ";

    for(int i = 3; i <= n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}

