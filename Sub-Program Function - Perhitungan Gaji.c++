#include <iostream>
using namespace std;

float hitungTunjangan(int gaji, float tunjangan){
    return gaji*tunjangan;
}


int main()
{
    float tunjangan = 0.20;
    
    int karyawan1 = 100;
    int karyawan2 = 200;
    int karyawan3 = 250;

    karyawan1 += hitungTunjangan(karyawan1,tunjangan);
    karyawan2 += hitungTunjangan(karyawan2,tunjangan);
    karyawan3 += hitungTunjangan(karyawan3,tunjangan);
    
    cout << "Gaji 1 = " << karyawan1 << endl;
    cout << "Gaji 2 = " << karyawan2 << endl;
    cout << "Gaji 3 = " << karyawan3 << endl;
        
    
}