#include <iostream>
using namespace std;
int main()
{

  int tinggi_segitiga,i,j;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i = 0; i < tinggi_segitiga; i++) {
    for(j = 1; j <= tinggi_segitiga-i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
 
  return 0;
}