print("=" * 50)
print("Perhitungan Tunjangan Karyawan")
print("=" * 50)

nama = input("Masukkan nama karyawan: ")


gaji_pokok = 300000
print(f"Gaji Pokok: Rp {gaji_pokok:,.0f}")

while True:
    golongan = int(input("Masukkan golongan (1/2/3): "))
    if golongan in [1, 2, 3]:
        break
    print("Golongan harus 1, 2, atau 3!\n")

while True:
    pendidikan = int(input("Masukkan pendidikan (SMA=1, D4/S1=2, S2=3, S3=4): "))
    if pendidikan in [1, 2, 3, 4]:
        break
    print("Pendidikan harus 1, 2, 3, atau 4!\n")

jam_harian = 8
hari_kerja = int(input("Masukkan jumlah hari kerja dalam sebulan: "))
jam_kerja_total = hari_kerja * jam_harian

print(f"Total jam kerja: {jam_kerja_total} jam ({hari_kerja} hari x {jam_harian} jam/hari)")

if golongan == 1:
    tunjangan_golongan = 0.05 * gaji_pokok
elif golongan == 2: 
    tunjangan_golongan = 0.1 * gaji_pokok
elif golongan == 3:
    tunjangan_golongan = 0.15 * gaji_pokok
else:
    tunjangan_golongan = 0

if pendidikan == 1:
    tunjangan_pendidikan = 0.05 * gaji_pokok
elif pendidikan == 2:
    tunjangan_pendidikan = 0.1 * gaji_pokok
elif pendidikan == 3:
    tunjangan_pendidikan = 0.2 * gaji_pokok
elif pendidikan == 4:
    tunjangan_pendidikan = 0.3 * gaji_pokok
else:
    tunjangan_pendidikan = 0


hari_kerja_normal = 24
jam_normal_per_bulan = jam_harian * hari_kerja_normal
jam_lembur = max(0, jam_kerja_total - jam_normal_per_bulan)
tunjangan_lembur = jam_lembur * 3500

gaji_total = gaji_pokok + tunjangan_golongan + tunjangan_pendidikan + tunjangan_lembur

print("\n" + "=" * 50)
print("RINCIAN GAJI KARYAWAN")
print("=" * 50)
print(f"Nama Karyawan        : {nama}")
print(f"Gaji Pokok           : Rp {gaji_pokok:,.0f}")
print(f"Tunjangan Golongan   : Rp {tunjangan_golongan:,.0f}")
print(f"Tunjangan Pendidikan : Rp {tunjangan_pendidikan:,.0f}")
print(f"Hari Kerja           : {hari_kerja} hari ({jam_kerja_total} jam)")
print(f"Jam Lembur           : {jam_lembur:.0f} jam")
print(f"Tunjangan Lembur     : Rp {tunjangan_lembur:,.0f}")
print("-" * 50)
print(f"TOTAL GAJI           : Rp {gaji_total:,.0f}")
print("=" * 50)