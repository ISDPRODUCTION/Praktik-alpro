print("============Menghitung Luas dan Keliling Lingkaran=============")

phi = 3.14
r = float(input("Masukkan jari-jari: "))

if r <= 0:
    print("Jari-jari tidak boleh negatif atau nol!")
else:
    luas = phi * r * r
    keliling = 2 * phi * r 
    
    print(f"Luas lingkaran adalah: {luas:.2f}")
    print(f"Keliling lingkaran adalah: {keliling:.2f}")