#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float pemakaian, tarif;
    
    cout << "=========tarif PDAM ==========" << endl;
    cout << "Total pemakaian air (m3): ";
    cin >> pemakaian;
    
    if (pemakaian <= 10) {
        tarif = pemakaian * 5000;
    }
    else if (pemakaian <= 20) {
        tarif = (10 * 5000) + (pemakaian - 10) * 7500;
    }
    else if (pemakaian <= 40) {
        tarif = (10 * 5000) + (10 * 7500) + (pemakaian - 20) * 10000;
    }
    else {  
        tarif = (10 * 5000) + (10 * 7500) + (20 * 10000) + (pemakaian - 40) * 15000;
    }
    
    cout << fixed << setprecision(0);
    cout << "Total tagihan PDAM adalah: Rp " << tarif << endl;
    
    return 0;
}