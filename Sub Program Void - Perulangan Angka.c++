#include <iostream>
using namespace std;

void perulangan(int a){
    int i;
    for (i=1; i<=a; i++){
        cout << i << endl;
    }
}

int main(){
    
    cout << "Input Jumlah Perhitungan : ";
    int a; 
    cin >> a;
    perulangan(a);

}