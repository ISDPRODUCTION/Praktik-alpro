print("=========tarif PDAM ==========")
pemakaian = float(input("Total pemakaian air (m³): "))

if (pemakaian <= 10):
    tarif = pemakaian * 5000
elif (pemakaian <= 20):
    tarif = (10 * 5000) + (pemakaian - 10) * 7500
elif (pemakaian <= 40):
    tarif = (10 * 5000) + (10 * 7500) + (pemakaian - 20) * 10000 
else:  # pemakaian > 40
    tarif = (10 * 5000) + (10 * 7500) + (20 * 10000) + (pemakaian - 40) * 15000

print("Total tagihan PDM adalah: Rp", f"{tarif:,.0f}")