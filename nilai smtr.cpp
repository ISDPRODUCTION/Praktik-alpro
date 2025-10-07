#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nama_mahasiswa, grade;
    int nilai_partisipasi, nilai_tugas, nilai_uts, nilai_uas;
    float nilai_akhir;
    
    cout << "Menghitung Nilai dan Grading IPS Mahasiswa \n" << endl;
    
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama_mahasiswa);
    
    while (true) {
        cout << "Masukkan Nilai Partisipasi Siswa: ";
        cin >> nilai_partisipasi;
        cout << "Masukkan Nilai Tugas Siswa: ";
        cin >> nilai_tugas;
        cout << "Masukkan Nilai Ujian Tengah Siswa: ";
        cin >> nilai_uts;
        cout << "Masukkan Nilai Ujian Akhir Semester Siswa: ";
        cin >> nilai_uas;
        cout << "\n" << endl;
        
        if (nilai_tugas < 0 || nilai_tugas > 100 ||
            nilai_partisipasi < 0 || nilai_partisipasi > 100 ||
            nilai_uas < 0 || nilai_uas > 100 ||
            nilai_uts < 0 || nilai_uts > 100) {
            
            cout << "Input Angka Tidak Boleh Negatif atau Lebih dari 100, Silahkan Ulangi \n" << endl;
        }
        else {
            nilai_akhir = ((2 * nilai_partisipasi) + (3 * nilai_tugas) + 
                          (2 * nilai_uts) + (3 * nilai_uas)) / 10.0;
            
            if (nilai_akhir >= 85 && nilai_akhir <= 100) {
                grade = "A";
            }
            else if (nilai_akhir >= 80 && nilai_akhir < 85) {
                grade = "A-";
            }
            else if (nilai_akhir >= 75 && nilai_akhir < 80) {
                grade = "B+";
            }
            else if (nilai_akhir >= 70 && nilai_akhir < 75) {
                grade = "B";
            }
            else if (nilai_akhir >= 65 && nilai_akhir < 70) {
                grade = "B-";
            }
            else if (nilai_akhir >= 60 && nilai_akhir < 65) {
                grade = "C+";
            }
            else if (nilai_akhir >= 55 && nilai_akhir < 60) {
                grade = "C";
            }
            else if (nilai_akhir >= 40 && nilai_akhir < 55) {
                grade = "D";
            }
            else {
                grade = "E";
            }
            
            cout << fixed << setprecision(2);
            cout << "Nilai Akhir " << nama_mahasiswa << " adalah: " 
                 << nilai_akhir << " Nilai Huruf: " << grade << " \n" << endl;
            break;
        }
    }
    
    return 0;
}