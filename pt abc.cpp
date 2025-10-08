#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nama;
    int golongan, pendidikan, hari_kerja;
    float gaji_pokok, tunjangan_golongan, tunjangan_pendidikan;
    float tunjangan_lembur, gaji_total;
    int jam_harian, hari_kerja_normal, jam_kerja_total, jam_normal_per_bulan, jam_lembur;
    
    cout << "==================================================" << endl;
    cout << "Perhitungan Tunjangan Karyawan" << endl;
    cout << "==================================================" << endl;
    
    cout << "Masukkan nama karyawan: ";
    getline(cin, nama);
    
    gaji_pokok = 300000;
    cout << "Gaji Pokok: Rp " << fixed << setprecision(0) << gaji_pokok << endl;
    
    while (true) {
        cout << "Masukkan golongan (1/2/3): ";
        cin >> golongan;
        if (golongan == 1 || golongan == 2 || golongan == 3) {
            break;
        }
        cout << "Golongan harus 1, 2, atau 3!\n" << endl;
    }
    
    while (true) {
        cout << "Masukkan pendidikan (SMA=1, D4/S1=2, S2=3, S3=4): ";
        cin >> pendidikan;
        if (pendidikan >= 1 && pendidikan <= 4) {
            break;
        }
        cout << "Pendidikan harus 1, 2, 3, atau 4!\n" << endl;
    }
    
    cout << "Masukkan jumlah hari kerja dalam sebulan: ";
    cin >> hari_kerja;
    
    jam_harian = 8;
    jam_kerja_total = hari_kerja * jam_harian;
    cout << "Total jam kerja: " << jam_kerja_total << " jam (" 
         << hari_kerja << " hari x " << jam_harian << " jam/hari)" << endl;
    
    
    if (golongan == 1) {
        tunjangan_golongan = 0.05 * gaji_pokok;
    }
    else if (golongan == 2) {
        tunjangan_golongan = 0.1 * gaji_pokok;
    }
    else if (golongan == 3) {
        tunjangan_golongan = 0.15 * gaji_pokok;
    }
    else {
        tunjangan_golongan = 0;
    }
    
    
    if (pendidikan == 1) {
        tunjangan_pendidikan = 0.05 * gaji_pokok;
    }
    else if (pendidikan == 2) {
        tunjangan_pendidikan = 0.1 * gaji_pokok;
    }
    else if (pendidikan == 3) {
        tunjangan_pendidikan = 0.2 * gaji_pokok;
    }
    else if (pendidikan == 4) {
        tunjangan_pendidikan = 0.3 * gaji_pokok;
    }
    else {
        tunjangan_pendidikan = 0;
    }
    
    hari_kerja_normal = 24;
    jam_normal_per_bulan = jam_harian * hari_kerja_normal;
    jam_lembur = jam_kerja_total - jam_normal_per_bulan;
    
    if (jam_lembur < 0) {
        jam_lembur = 0;
    }
    
    tunjangan_lembur = jam_lembur * 3500;
    
    gaji_total = gaji_pokok + tunjangan_golongan + tunjangan_pendidikan + tunjangan_lembur;
    
    cout << "\n==================================================" << endl;
    cout << "RINCIAN GAJI KARYAWAN" << endl;
    cout << "==================================================" << endl;
    cout << "Nama Karyawan        : " << nama << endl;
    cout << fixed << setprecision(0);
    cout << "Gaji Pokok           : Rp " << gaji_pokok << endl;
    cout << "Tunjangan Golongan   : Rp " << tunjangan_golongan << endl;
    cout << "Tunjangan Pendidikan : Rp " << tunjangan_pendidikan << endl;
    cout << "Hari Kerja           : " << hari_kerja << " hari (" << jam_kerja_total << " jam)" << endl;
    cout << "Jam Lembur           : " << jam_lembur << " jam" << endl;
    cout << "Tunjangan Lembur     : Rp " << tunjangan_lembur << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "TOTAL GAJI           : Rp " << gaji_total << endl;
    cout << "==================================================" << endl;
    
    return 0;
}