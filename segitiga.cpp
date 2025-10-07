#include <iostream>
using namespace std;
int main() {
    int alas;
    cout<< "Masukkan alas: " << endl;
    cin >> alas;
    int tinggi;
    cout<< "Masukkan tinggi: "<<endl   ;
    cin >> tinggi;
    int luas = (alas * tinggi) / 2;
    cout << "Luas segitiga adalah: " << luas << endl;
    return 0;
}