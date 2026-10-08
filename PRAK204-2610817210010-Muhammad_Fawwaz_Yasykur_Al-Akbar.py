pi = 22 / 7
r, t = map(float, input().split())

volume = pi * r * r * t
area = 2 * pi * r * (r + t)
circumference = 2 * pi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {area:.2f}")
print(f"Keliling = {circumference:.2f}")