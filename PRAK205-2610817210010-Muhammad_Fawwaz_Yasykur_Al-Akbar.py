import math

side_a, side_b = map(int, input().split())

height = min(side_a, side_b)
hypotenuse = max(side_a, side_b)

base = int(math.sqrt((hypotenuse * hypotenuse) - (height * height)))
perimeter = base + height + hypotenuse
area = (base * height) // 2

print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm")
print(f"Keliling = {perimeter} cm")
print(f"Luas = {area} cm^2")