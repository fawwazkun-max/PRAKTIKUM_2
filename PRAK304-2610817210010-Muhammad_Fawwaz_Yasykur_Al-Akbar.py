a = int(input())

if a < 0 or a > 99:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a == 0:
    print("Nol")
elif a < 10:
    print("Satuan")
elif a < 20 and a != 10:
    print("Belasan")
else:
    print("Puluhan")