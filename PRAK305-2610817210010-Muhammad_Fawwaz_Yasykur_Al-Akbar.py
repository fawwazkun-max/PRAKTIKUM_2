total = int(input())

days = total // 86400
remainder = total % 86400
hours = remainder // 3600
minutes = (remainder % 3600) // 60
seconds = remainder % 60

if days > 0:
    print(f"{days} hari {hours:02d}:{minutes:02d}:{seconds:02d}")
else:
    print(f"{hours:02d}:{minutes:02d}:{seconds:02d}")