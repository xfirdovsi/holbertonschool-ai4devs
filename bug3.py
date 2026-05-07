def divide_numbers(a, b):
    return a / b

# Xəta: Proqram işləyərkən sıfıra bölmə xətası verəcək
numbers = [10, 20, 0, 40]
for n in numbers:
    print(divide_numbers(100, n))