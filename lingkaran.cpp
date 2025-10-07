#include <iostream>
using namespace std;
int main() {
    int jarijari;
    cout<< "Masukkan jari-jari: " << endl;
    cin >> jarijari;
    float phi = 3.14;
    float luas = phi * jarijari * jarijari;
    float keliling = 2 * phi * jarijari;
    cout << "Keliling lingkaran adalah: " << keliling << endl;
    cout << "Luas lingkaran adalah: " << luas << endl;
    return 0;
}