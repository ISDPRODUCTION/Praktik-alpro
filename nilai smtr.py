print("Menghitung Nilai dan Grading IPS Mahasiswa \n")

nama_mahasiswa = input("Masukkan Nama Mahasiswa: ")
while True:
    nilai_partisipasi = int(input("Masukkan Nilai Partisipasi Siswa: "))
    nilai_tugas = int(input("Masukkan Nilai Tugas Siswa: "))   
    nilai_uts = int(input("Masukkan Nilai Ujian Tengah Siswa: "))   
    nilai_uas = int(input("Masukkan Nilai Ujian Akhir Semester Siswa: "))   
    print("\n")

    if (
        nilai_tugas < 0 or nilai_tugas > 100 or
        nilai_partisipasi < 0 or nilai_partisipasi > 100 or
        nilai_uas < 0 or nilai_uas > 100 or
        nilai_uts < 0 or nilai_uts > 100
    ):
        print("Input Angka Tidak Boleh Negatif atau Lebih dari 100, Silahkan Ulangi \n")

    else:
        nilai_akhir = ((2 * nilai_partisipasi) + (3 * nilai_tugas) + (2 * nilai_uts) + (3 * nilai_uas)) / 10
        
        if nilai_akhir >= 85 and nilai_akhir <= 100:
            grade = "A"
        elif nilai_akhir >= 80 and nilai_akhir < 85:
            grade = "A-"
        elif nilai_akhir >= 75 and nilai_akhir < 80:    
            grade = "B+"
        elif nilai_akhir >= 70 and nilai_akhir < 75:
            grade = "B"
        elif nilai_akhir >= 65 and nilai_akhir < 70:
            grade = "B-"
        elif nilai_akhir >= 60 and nilai_akhir < 65:
            grade = "C+"
        elif nilai_akhir >= 55 and nilai_akhir < 60:
            grade = "C"
        elif nilai_akhir >= 40 and nilai_akhir < 55:
            grade = "D"
        else:
            grade = "E"
        print(f"Nilai Akhir {nama_mahasiswa} adalah: {nilai_akhir} Nilai Huruf: {grade} \n")
        break 