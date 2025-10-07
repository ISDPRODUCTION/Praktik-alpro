print ("========nilai akhir=========")
p = float (input ("nilai partisipasi : "))
t = float (input ("nilai tugas : "))
uts = float (input ("nilai uts : "))
uas = float (input ("nilai uas : "))
na = (2*p) + (3*t) + (2*uts) + (3*uas)  
print (f"nilai akhir adalah : ", na / 10)

if (na >=85 and na <=100):
    print ("nilai anda A dan bernilai 4")
elif (na >= 80 and na <= 84):
    print ("nilai anda A- dan bernilai 3,75")
elif (na <= 75 and na <= 79):
    print ("nilai anda B+ dan bernilai 3,5")
elif (na <= 70 and na <= 74):
    print ("nilai anda B dan bernilai 3")
elif (na <=65 and na <=69):
    print ("nilai anda B- dan bernilai 2,75")
elif (na <=60 and na <=64):
    print ("nilai anda C+ dan bernilai 2,5")
elif (na <=55 and na <=59):
    print ("nilai anda C dan bernilai 2 ")
elif (na <=40 and na <=54):
    print ("nilai anda D dan bernilai 1")
elif (na <=0 and na <=39):
    print ("nilai anda E dan bernilai 0")
