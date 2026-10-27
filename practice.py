# Find the second largest number in a list

a = list(map(int, input("Enter numbers: ").split()))

a = sorted(set(a))

print("Second largest:", a[-2])